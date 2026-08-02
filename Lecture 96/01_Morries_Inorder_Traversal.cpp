#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root;
        while (curr != NULL) {
            if (curr->left == NULL) {
                ans.push_back(curr->val);
                curr = curr->right;
            } else {
                // Find Inorder Predecessor
                TreeNode* IP = curr->left;
                while (IP->right != curr && IP->right != NULL) {
                    IP = IP->right;
                }
                if (IP->right == NULL) {
                    // Create thread
                    IP->right = curr;
                    curr = curr->left;
                } else {
                    // Remove thread
                    IP->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }
        return ans;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    Solution obj;
    vector<int> ans = obj.inorderTraversal(root);

    cout << "Inorder Traversal: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    // Free allocated memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}