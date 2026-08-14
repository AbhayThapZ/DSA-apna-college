//Leetcode 116

#include <iostream>
#include <queue>
using namespace std;

// Definition of Node
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};

class Solution {
public:
    Node* connect(Node* root) {

        if (root == NULL || root->left == NULL) {
            return root;
        }

        queue<Node*> q;

        q.push(root);
        q.push(NULL);

        Node* prev = NULL;

        while (q.size() > 0) {

            Node* curr = q.front();
            q.pop();

            if (curr == NULL) {

                if (q.size() == 0) {
                    break;
                }

                q.push(NULL);
                prev = NULL;

            } 
            else {

                if (curr->left != NULL) {
                    q.push(curr->left);
                }

                if (curr->right != NULL) {
                    q.push(curr->right);
                }

                if (prev != NULL) {
                    prev->next = curr;
                }

                prev = curr;
            }
        }

        return root;
    }
};

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Call solution
    Solution obj;
    obj.connect(root);

    // Print nodes using next pointers
    Node* levelStart = root;

    while (levelStart != NULL) {

        Node* curr = levelStart;

        while (curr != NULL) {
            cout << curr->val << " -> ";
            curr = curr->next;
        }

        cout << "NULL" << endl;

        levelStart = levelStart->left;
    }

    return 0;
}