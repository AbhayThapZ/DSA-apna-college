//Leetcode 173
#include <iostream>
#include <stack>
using namespace std;

// Binary Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right) {}
};

// BST Iterator
class BSTIterator {
public:
    stack<TreeNode*> s;

    void storeLeftNodes(TreeNode* root) {
        while (root != nullptr) {
            s.push(root);
            root = root->left;
        }
    }

    BSTIterator(TreeNode* root) {
        storeLeftNodes(root);
    }

    int next() {
        TreeNode* ans = s.top();
        s.pop();

        storeLeftNodes(ans->right);

        return ans->val;
    }

    bool hasNext() {
        return !s.empty();
    }
};

int main() {

    TreeNode* root = new TreeNode(7);

    root->left = new TreeNode(3);
    root->left->left = new TreeNode(2);
    root->right = new TreeNode(15);

    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(20);

    // Create iterator
    BSTIterator iterator(root);

    // Print BST in ascending order
    while (iterator.hasNext()) {
        cout << iterator.next() << " ";
    }

    cout << endl;

    return 0;
}