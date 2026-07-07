#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d={1,2,3,4,5,6,7,8,9};
    d.emplace_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    d.pop_back();
    d.pop_front();
    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
//the diff.between the lista nd deque is deque can be random accessed