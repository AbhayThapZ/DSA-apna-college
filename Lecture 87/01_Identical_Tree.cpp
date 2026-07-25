//Leetcode 100
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int idx = -1;

// Build tree from preorder traversal (-1 represents NULL)
Node* build_Tree(vector<int>& preorder) {
    idx++;

    if (preorder[idx] == -1)
        return NULL;

    Node* root = new Node(preorder[idx]);

    root->left = build_Tree(preorder);
    root->right = build_Tree(preorder);

    return root;
}

class Solution {
public:
    bool isSameTree(Node* p, Node* q) {
        if (p == NULL || q == NULL)
            return p == q;

        bool isLeftSame = isSameTree(p->left, q->left);
        bool isRightSame = isSameTree(p->right, q->right);

        return isLeftSame && isRightSame && (p->data == q->data);
    }
};

int main() {

    // Tree 1
    vector<int> tree1 = {1, 2, -1, -1, 3, -1, -1};

    // Tree 2
    vector<int> tree2 = {1, 2, -1, -1, 3, -1, -1};

    idx = -1;
    Node* root1 = build_Tree(tree1);

    idx = -1;
    Node* root2 = build_Tree(tree2);

    Solution obj;

    if (obj.isSameTree(root1, root2))
        cout << "Trees are Same" << endl;
    else
        cout << "Trees are Different" << endl;

    return 0;
}