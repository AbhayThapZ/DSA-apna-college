//WAF to print nth Fibonacci series
//eg:0 1 1 2 3 5 8 13 ... means next number is sum of two previous numbers, starting with 0 but can start from 1 as well
#include <iostream>
using namespace std;

void fibonacci_Series(int n){
    int first=0;
    int second=1;
    //took 0 and 1 becoz fibonakki series values start from it
    int next;
    if(n>=0){
        cout<<first<<" ";
    }
    if(n>=1){
        cout<<second<<" ";
    }
    for(int i=2;i<=n;i++){
        next=first+second;
        cout<<next<<" ";
        first=second;
        second=next;
    }
}
int main(){
    int nth=10;
    fibonacci_Series(nth);
    return 0;
}