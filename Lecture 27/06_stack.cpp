#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s1;
    s1.push(1);//O(1)
    s1.push(2);
    s1.push(3);
    s1.size();
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;

    stack<int> s2;
    s1.empty();
    s2.empty();
    s2.swap(s1);//now s2 have all the elements and s1 is empty
    s1.empty();
    s2.empty();
    return 0;
}