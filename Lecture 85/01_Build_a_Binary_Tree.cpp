#include <iostream>
#include <vector>
#include <queue>
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
Node* build_Tree(vector<int>& preorder){//O(n)
    idx++;
    if(preorder[idx]==-1) return NULL;
    Node* root=new Node(preorder[idx]);
    root->left=build_Tree(preorder) ;//LEFT
    root->right=build_Tree(preorder) ;//RIGHT
    return root;//for creating branches connection
}

//Preorder Traversal
void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//Inorder Traversal
void inOrder(Node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

//Postorder Traversal
void postOrder(Node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

//Levelorder Traversal
void levelOrder(Node* root){
    queue<Node*> q;
    
    q.push(root);
    // q.push(NULL);//for printing elements in separate levels

    while(q.size()>0){
        Node* curr=q.front();
        q.pop();

        //for printing elements in separate levels
        // if(curr==NULL){
        //     if(!q.empty()){
        //         cout<<endl;
        //         q.push(NULL);
        //         continue;
        //     }else{
        //         break;
        //     }
        // }

        cout<<curr->data<<" ";
        if((curr->left)!=NULL){
            q.push(curr->left);
        }
        if((curr->right)!=NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}

int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root=build_Tree(preorder);
    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl;
    // cout<<root->right->data<<endl;

    //Recursive Approaches
    preOrder(root);
    cout<<endl;

    inOrder(root);
    cout<<endl;

    postOrder(root);
    cout<<endl;

    //Iterative Approaches
    levelOrder(root);
    cout<<endl;

    return 0;
}