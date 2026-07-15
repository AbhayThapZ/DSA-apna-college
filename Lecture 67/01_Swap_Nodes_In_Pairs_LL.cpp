//Leetcode 24

#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// List class
class list {
public:
    Node* head;

    list() {
        head = nullptr;
    }

    // Insert at end
    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Display list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr)
                cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Solution class
class Solution {
public:
    Node* swapPairs(Node* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        Node* fir = head;
        Node* sec = head->next;
        Node* prev = nullptr;

        while (fir != nullptr && sec != nullptr) {

            Node* third = sec->next;

            sec->next = fir;
            fir->next = third;

            if (prev != nullptr) {
                prev->next = sec;
            } else {
                head = sec;
            }

            // Update pointers
            prev = fir;
            fir = third;

            if (third != nullptr)
                sec = third->next;
            else
                sec = nullptr;
        }

        return head;
    }
};

int main() {

    list l;

    // Create list: 1 -> 2 -> 3 -> 4 -> 5
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);

    cout << "Original List: ";
    l.display();

    Solution s;
    l.head = s.swapPairs(l.head);

    cout << "After Swapping Pairs: ";
    l.display();

    return 0;
}