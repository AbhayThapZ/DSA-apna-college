//Leetcode 232
#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {}

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) return -1; // queue is empty
        int ans = s2.top();
        s2.pop();
        return ans;
    }

    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) return -1; // queue is empty
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue* obj = new MyQueue();

    obj->push(10);
    obj->push(20);
    obj->push(30);

    cout << "Peek: " << obj->peek() << endl;   // should print 10
    cout << "Pop: " << obj->pop() << endl;     // should remove 10
    cout << "Peek after pop: " << obj->peek() << endl; // should print 20
    cout << "Is empty? " << (obj->empty() ? "Yes" : "No") << endl;

    delete obj;
    return 0;
}
