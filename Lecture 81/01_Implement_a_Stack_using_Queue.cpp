// Leetcode 225
#include <iostream>
#include <queue>
using namespace std;

class MyStack
{
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() {}

    void push(int x)
    { // O(n)
        // Move everything from q1 to q2
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        // Push new element into q1
        q1.push(x);

        // Move everything back from q2 to q1
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        int ans = q1.front();
        q1.pop();
        return ans;
    }

    int top()
    {
        return q1.front();
    }

    bool empty()
    {
        return q1.empty();
    }
};

int main()
{
    MyStack *obj = new MyStack();

    obj->push(10);
    obj->push(20);
    obj->push(30);

    cout << "Top element: " << obj->top() << endl;           // should print 30
    cout << "Pop element: " << obj->pop() << endl;           // should remove 30
    cout << "Top element after pop: " << obj->top() << endl; // should print 20
    cout << "Is stack empty? " << (obj->empty() ? "Yes" : "No") << endl;

    delete obj;
    return 0;
}
