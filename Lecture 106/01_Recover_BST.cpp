#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* prev = nullptr;
    TreeNode* first = nullptr;
    TreeNode* sec = nullptr;

    void inorder(TreeNode* root) {
        if (root == nullptr)
            return;

        // Traverse left subtree
        inorder(root->left);

        // Detect incorrect order
        if (prev != nullptr && prev->val > root->val) {
            if (first == nullptr) {
                first = prev;
            }

            sec = root;
        }

        prev = root;

        // Traverse right subtree
        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        // Find the two nodes that are in the wrong position
        inorder(root);

        // Swap their values
        int temp = first->val;
        first->val = sec->val;
        sec->val = temp;
    }
};

// Inorder traversal to check the result
void printInorder(TreeNode* root) {
    if (root == nullptr)
        return;

    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {

    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(3);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(8);
    root->right = new TreeNode(4);
    root->right->right = new TreeNode(9);

    cout << "Before recovery: ";
    printInorder(root);

    Solution obj;
    obj.recoverTree(root);

    cout << "\nAfter recovery: ";
    printInorder(root);

    return 0;
}