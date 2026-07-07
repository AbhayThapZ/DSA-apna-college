#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l={1,2,3,4,5,6,7,8,9};
    l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.pop_back();
    l.pop_front();
    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}