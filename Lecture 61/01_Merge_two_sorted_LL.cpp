//leetcode 21
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List1
{
public:
    Node *head;
    Node *tail;

    List1()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
};

class List2
{
public:
    Node *head;
    Node *tail;

    List2()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
};

class List
{
public:
    Node* mergeTwoLists(Node* h1, Node* h2)
    {
        if (h1 == NULL)
            return h2;

        if (h2 == NULL)
            return h1;

        if (h1->data <= h2->data)
        {
            h1->next = mergeTwoLists(h1->next, h2);
            return h1;
        }
        else
        {
            h2->next = mergeTwoLists(h1, h2->next);
            return h2;
        }
    }

    void print(Node *head)
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
};

int main()
{
    List1 ll1;
    ll1.push_back(1);
    ll1.push_back(3);
    ll1.push_back(5);

    List2 ll2;
    ll2.push_back(2);
    ll2.push_back(4);
    ll2.push_back(6);

    List ll;

    Node *mergedHead = ll.mergeTwoLists(ll1.head, ll2.head);

    cout << "Merged List: ";
    ll.print(mergedHead);

    return 0;
}