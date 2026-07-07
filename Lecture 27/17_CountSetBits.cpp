#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//custom comparitor

int main(){
    int n1=15;
    cout<<__builtin_popcount(n1)<<endl;//1 1 1 1 i.e. 4
    long int n2=15;
    cout<<__builtin_popcountl(n2)<<endl;//1 1 1 1 i.e. 4
    long long int n3=15;
    cout<<__builtin_popcountll(n3)<<endl;//1 1 1 1 i.e. 4
    return 0;
}