// Leetcode 108
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
class Solution
{
public:
    Node *helper(vector<int> &nums, int st, int end)
    {
        if (st > end)
            return NULL;
        int mid = st + (end - st) / 2;
        Node *root = new Node(nums[mid]);
        root->left = helper(nums, st, mid - 1);
        root->right = helper(nums, mid + 1, end);
        return root;
    }
    Node *sortedArrayToBST(vector<int> &nums)
    {
        return helper(nums, 0, nums.size() - 1);
    }
};
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    vector<int> nums = {-10, -3, 0, 5, 9};
    Solution s;
    Node *root = s.sortedArrayToBST(nums);
    cout << "Inorder Traversal of Balanced BST: ";
    inorder(root);
    return 0;
}