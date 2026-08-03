//Lettcode 114
#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* nextRight = nullptr;

    void flatten(TreeNode* root) {
        if (root == nullptr)
            return;

        flatten(root->right);
        flatten(root->left);

        root->left = nullptr;
        root->right = nextRight;
        nextRight = root;
    }
};

// Function to print the flattened tree
void printFlattened(TreeNode* root) {
    while (root != nullptr) {
        cout << root->val << " ";
        root = root->right;
    }
    cout << endl;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(6);

    Solution obj;
    obj.flatten(root);

    cout << "Flattened Tree: ";
    printFlattened(root);

    return 0;
}