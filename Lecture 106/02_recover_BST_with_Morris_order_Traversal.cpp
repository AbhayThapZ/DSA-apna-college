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


// Recover BST using Morris Inorder Traversal
void recoverTree(TreeNode* root) {

    TreeNode* first = NULL;
    TreeNode* second = NULL;
    TreeNode* prev = NULL;

    while (root != NULL) {

        // Case 1: No left subtree
        if (root->left == NULL) {

            // Check for incorrect order
            if (prev != NULL && prev->val > root->val) {

                if (first == NULL) {
                    first = prev;
                }

                second = root;
            }

            prev = root;
            root = root->right;
        }

        // Case 2: Left subtree exists
        else {

            // Find inorder predecessor
            TreeNode* IP = root->left;

            while (IP->right != NULL && IP->right != root) {
                IP = IP->right;
            }

            // Create thread
            if (IP->right == NULL) {

                IP->right = root;
                root = root->left;
            }

            // Remove thread
            else {

                // Check for incorrect order
                if (prev != NULL && prev->val > root->val) {

                    if (first == NULL) {
                        first = prev;
                    }

                    second = root;
                }

                prev = root;

                // Remove temporary link
                IP->right = NULL;

                root = root->right;
            }
        }
    }

    // Swap the incorrect values
    if (first != NULL && second != NULL) {

        int temp = first->val;
        first->val = second->val;
        second->val = temp;
    }
}


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


    // Call recoverTree directly
    recoverTree(root);


    cout << "\nAfter recovery: ";
    printInorder(root);


    return 0;
}