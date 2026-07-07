#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main(){
    set<int> s;
    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
    // s.insert(4); duplicate ignored
    s.emplace(5);
    cout<<s.size()<<endl;
    for(auto val:s){
        cout<<val<<" "<<endl;
    }
    cout<<*(s.lower_bound(3))<<endl;
    cout<<*(s.lower_bound(4))<<endl;
    // cout<<*(s.lower_bound(6))<<endl; returns s.end() junk garbage
    cout<<*(s.upper_bound(3))<<endl;
    cout<<*(s.upper_bound(4))<<endl;
    // cout<<*(s.upper_bound(0))<<endl; returns s.end() junk garbage

    multiset<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);
    for(auto val:s1){
        cout<<val<<endl;
    }
    unordered_set<int> s2;
    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    s2.insert(4);
    s2.insert(5);
    s2.insert(6);
    for(auto val:s2){
        cout<<val<<endl;
    }
    return 0;
}