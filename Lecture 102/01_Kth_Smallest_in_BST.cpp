// Leetcode 230
#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int prevOrder = 0;
    int kthSmallest(TreeNode *root, int k)
    {
        if (root == nullptr)
            return -1;

        // Search in left subtree
        if (root->left)
        {
            int leftAns = kthSmallest(root->left, k);

            if (leftAns != -1)
                return leftAns;
        }

        // Visit current node
        if (prevOrder + 1 == k)
            return root->val;

        prevOrder += 1;

        // Search in right subtree
        if (root->right)
        {
            int rightAns = kthSmallest(root->right, k);

            if (rightAns != -1)
                return rightAns;
        }

        return -1;
    }
};

int main()
{

    TreeNode *root = new TreeNode(5);

    root->left = new TreeNode(3);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(8);

    int k = 3;

    Solution obj;

    int answer = obj.kthSmallest(root, k);

    cout << "The " << k << "th smallest element is: "
         << answer << endl;

    return 0;
}