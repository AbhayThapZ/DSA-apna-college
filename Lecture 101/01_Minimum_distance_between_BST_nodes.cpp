//Leetcode 783

#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    TreeNode* prev = nullptr;

    int minDiffInBST(TreeNode* root) {
        if (root == nullptr)
            return INT_MAX;

        int ans = INT_MAX;

        if (root->left != nullptr) {
            int leftMin = minDiffInBST(root->left);
            ans = min(ans, leftMin);
        }

        if (prev != nullptr) {
            ans = min(ans, root->val - prev->val);
        }

        prev = root;

        if (root->right != nullptr) {
            int rightMin = minDiffInBST(root->right);
            ans = min(ans, rightMin);
        }

        return ans;
    }
};

int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution obj;
    cout << "Minimum Difference: " << obj.minDiffInBST(root) << endl;

    return 0;
}