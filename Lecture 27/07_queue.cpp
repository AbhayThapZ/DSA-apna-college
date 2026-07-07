#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q1;
    q1.push(1);//O(1)
    q1.push(2);
    q1.push(3);
    q1.size();
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;

    queue<int> q2;
    q1.empty();
    q2.empty(); 
    q2.swap(q1);//now q2 have all the elements and q1 is empty
    q1.empty();
    q2.empty();
    return 0;
} 