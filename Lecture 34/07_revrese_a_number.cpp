#include <iostream>
using namespace std;

int revNum(int n){
    int rN=0;
    while(n>0){
        int digit=n%10;
        rN=(rN*10)+digit;
        n/=10;
    }
    return rN;
}

int main(){
    int n=4537;
    cout<<revNum(n);
    return 0;
}