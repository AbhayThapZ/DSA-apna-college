// Leetcode 572

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int idx = -1;

// Build tree from preorder traversal (-1 represents NULL)
Node *buildTree(vector<int> &preorder)
{
    idx++;

    if (preorder[idx] == -1)
        return NULL;

    Node *root = new Node(preorder[idx]);

    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

class Solution
{
public:
    bool isIdentical(Node *p, Node *q)
    {
        if (p == NULL || q == NULL)
            return p == q;

        return isIdentical(p->left, q->left) &&
               isIdentical(p->right, q->right) &&
               (p->data == q->data);
    }

    bool isSubtree(Node *root, Node *subRoot)
    {
        if (root == NULL || subRoot == NULL)
            return root == subRoot;

        if (root->data == subRoot->data &&
            isIdentical(root, subRoot))
            return true;

        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};

int main()
{

    vector<int> tree = {3,4,1,-1,-1,2,-1,-1,5,-1,-1};

    vector<int> subtree = {4,1,-1,-1,2,-1,-1};

    idx = -1;
    Node *root = buildTree(tree);

    idx = -1;
    Node *subRoot = buildTree(subtree);

    Solution obj;

    if (obj.isSubtree(root, subRoot))
        cout << "Subtree Found" << endl;
    else
        cout << "Subtree Not Found" << endl;

    return 0;
}