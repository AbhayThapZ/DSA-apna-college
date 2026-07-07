#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//custom comparitor

int main(){
    string s1="abc";
    next_permutation(s1.begin(),s1.end());
    cout<<s1<<endl;
    string s2="acb";
    prev_permutation(s2.begin(),s2.end());
    cout<<s2<<endl;
    return 0;
}