// Leetcode :543
#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    int ans = 0;

    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        ans = max(ans, leftHeight + rightHeight);

        return max(leftHeight, rightHeight) + 1;
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        height(root);
        return ans;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;

    cout << "Diameter of Binary Tree = " << obj.diameterOfBinaryTree(root) << endl;
    return 0;
}

// class Solution {
// public:
//     int height(TreeNode* root){
//         if(root==NULL) return 0;
//         int leftHeight=height(root->left);
//         int rightHeight=height(root->right);
//         return max(leftHeight,rightHeight)+1;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL) return 0;
//         int leftDiameter=diameterOfBinaryTree(root->left);
//         int rightDiameter=diameterOfBinaryTree(root->right);
//         int currDiameter=height(root->left)+height(root->right);
//         return max(max(leftDiameter,rightDiameter),currDiameter);
//     }
// };