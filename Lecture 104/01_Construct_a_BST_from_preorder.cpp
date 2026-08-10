#include <iostream>
#include <vector>
#include <climits>
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

    TreeNode* buildBST(vector<int>& preorder, int& i, int bound) {

        // If all elements are processed or current element
        // cannot be placed in this subtree
        if (i >= preorder.size() || preorder[i] > bound)
            return nullptr;

        // Create root node
        TreeNode* root = new TreeNode(preorder[i++]);

        // Build left subtree
        root->left = buildBST(preorder, i, root->val);

        // Build right subtree
        root->right = buildBST(preorder, i, bound);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;

        return buildBST(preorder, i, INT_MAX);
    }
};

// Preorder traversal
void preorderTraversal(TreeNode* root) {
    if (root == nullptr)
        return;

    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Free allocated memory
void deleteTree(TreeNode* root) {
    if (root == nullptr)
        return;

    deleteTree(root->left);
    deleteTree(root->right);

    delete root;
}

int main() {

    // Given preorder traversal
    vector<int> preorder = {8, 5, 1, 7, 10, 12};

    Solution obj;

    // Construct BST
    TreeNode* root = obj.bstFromPreorder(preorder);

    cout << "Original Preorder: ";
    for (int x : preorder) {
        cout << x << " ";
    }

    cout << "\n\nConstructed BST Preorder: ";
    preorderTraversal(root);

    // Free memory
    deleteTree(root);

    return 0;
}