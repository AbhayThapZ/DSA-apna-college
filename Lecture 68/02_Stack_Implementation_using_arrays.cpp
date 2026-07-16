#include <iostream>
using namespace std;

class Stack
{
    int arr[10];
    int topIdx;

public:
    Stack()
    {
        topIdx = -1;
    }
    void push(int val)
    {
        if (topIdx == 9)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++topIdx] = val;
    }
    void pop()
    {
        if (topIdx == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        topIdx--;
    }
    int top()
    {
        if (topIdx == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[topIdx];
    }
    bool empty()
    {
        return topIdx == -1;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);
    s.push(100);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout<<endl;
    cout<<s.empty()<<endl;
    s.push(10);
    cout<<s.top()<<endl;
    return 0;
}