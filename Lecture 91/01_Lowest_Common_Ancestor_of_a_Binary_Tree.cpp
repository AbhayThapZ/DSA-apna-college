//Leetcode 236
#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx]==-1) return NULL;
    Node* root=new Node(preorder[idx]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
}

class Solution {
public:
    Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        if(root==NULL) return NULL;
        if(root->data==p->data || root->data==q->data) return root;//LCA
        Node* leftLCA=lowestCommonAncestor(root->left,p,q);
        Node* rightLCA=lowestCommonAncestor(root->right,p,q);
        if(leftLCA && rightLCA) return root;
        else if(leftLCA!=NULL) return leftLCA;
        else return rightLCA;
    }
};

int main(){
    vector<int> preorder={1,2,4,-1,-1,5,8,-1,-1,9,-1,-1,3,6,-1,-1,7,-1,-1};
    Node* root=buildTree(preorder);
    Solution sol;
    Node* p=new Node(4);
    Node* q=new Node(5);
    Node* LCA=sol.lowestCommonAncestor(root,p,q);
    cout<<"LCA for node 4 and 5 is :"<<LCA->data<<endl;
    return 0;
}