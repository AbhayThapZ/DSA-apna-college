#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> q1;
    q1.push(3);//O(logn)
    q1.push(10);
    q1.push(1);
    q1.push(5);
    q1.size();
    while(!q1.empty()){
        cout<<q1.top()<<" ";//O(1)
        q1.pop();//O(logn)
    }
    cout<<endl;

    priority_queue<int,vector<int>,greater<int>> q2;//greater is a functor which reverse the order ,work like a comparitor
    q2.push(3);
    q2.push(10);
    q2.push(1);
    q2.push(5);
    q2.size();
    while(!q2.empty()){
        cout<<q2.top()<<" ";
        q2.pop();
    }
    cout<<endl;
    return 0;
} 