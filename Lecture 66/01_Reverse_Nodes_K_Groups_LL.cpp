//Leetcode 25
#include <iostream>
using namespace std;

// Node class
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// List class
class List
{
public:
    Node *head;

    List()
    {
        head = nullptr;
    }

    // Insert at end
    void insert(int value)
    {
        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Display list
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data;
            if (temp->next != nullptr)
                cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Solution class
class Solution
{
public:
    Node *reverseKGroup(Node *head, int k)
    {
        Node *temp = head;

        // Check if k nodes exist
        int count = 0;
        while (count < k)
        {
            if (temp == nullptr)
                return head;
            temp = temp->next;
            count++;
        }

        // Reverse remaining groups
        Node *prevNode = reverseKGroup(temp, k);

        // Reverse current group
        temp = head;
        count = 0;

        while (count < k)
        {
            Node *nextNode = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = nextNode;
            count++;
        }

        return prevNode;
    }
};

int main()
{
    List l;

    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);

    cout << "Original List: ";
    l.display();

    int k = 2;

    Solution s;
    l.head = s.reverseKGroup(l.head, k);

    cout << "After Reversing in Groups of " << k << ": ";
    l.display();

    return 0;
}