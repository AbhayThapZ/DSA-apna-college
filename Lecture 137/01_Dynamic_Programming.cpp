#include <iostream>
#include <vector>
using namespace std;

//normal recusrion
int fib(int n){//O(2^n)
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

//in dp-memoization
int fibMem(int n,vector<int> &f){//O(n)
    if(n<=1) return n;
    if(f[n]!=-1) return f[n];
    return f[n]=fibMem(n-1,f)+fibMem(n-2,f);
}

//in dp-tabulation
int fibTab(int n){//O(n)
    vector<int> f(n+1);
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}

int main(){
    int n=6;
    vector<int> f(n+1,-1);
    cout<<fib(n)<<endl;
    cout<<fibMem(n,f)<<endl;
    cout<<fibTab(n)<<endl;
    return 0;
}