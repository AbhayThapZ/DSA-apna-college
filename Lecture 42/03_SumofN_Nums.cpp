#include <iostream>
using namespace std;

int sumofNnums(int n){
    if(n==1) return 1;
    return n+sumofNnums(n-1);
}

int main(){
    int n=4;
    cout<<sumofNnums(n);
    return 0;
}