// leetcode 138
#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class List
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == NULL)
        {
            return NULL;
        }

        unordered_map<Node *, Node *> m;

        // Copy the normal nodes with next
        Node *newHead = new Node(head->val);
        Node *oldTemp = head->next;
        Node *newTemp = newHead;

        m[head] = newHead;

        while (oldTemp != NULL)
        {
            Node *copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;

            newTemp->next = copyNode;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        // Random connection
        oldTemp = head;
        newTemp = newHead;

        while (oldTemp != NULL)
        {
            newTemp->random = m[oldTemp->random];

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        return newHead;
    }
};

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << "Value: " << head->val << "  Random: ";

        if (head->random)
            cout << head->random->val;
        else
            cout << "NULL";

        cout << endl;
        head = head->next;
    }
}

int main()
{

    // Create nodes
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);

    // Next pointers
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    // Random pointers
    n1->random = n3;
    n2->random = n1;
    n3->random = n4;
    n4->random = n2;

    cout << "Original List:\n";
    printList(n1);

    List obj;
    Node *copyHead = obj.copyRandomList(n1);

    cout << "\nCopied List:\n";
    printList(copyHead);

    return 0;
}