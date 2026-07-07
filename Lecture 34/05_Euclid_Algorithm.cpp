//used to calculate GCD/HCF 
#include <iostream>
using namespace std;

int gcd(int a ,int b){
    while(a>0 && b>0){
        if(a>b){
            a%=b;
        }
        if(b>a){
            b%=a;
        }
        if(a==b){
            return a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}

//recursion(did't studied yet)
// int gcdrec(int a ,int b){
//     //assume a is greater than b
//     if(b==0) return a;
//     gcdrec(b,a%b);
// }

int main(){
    int a=20,b=20;
    cout<<gcd(a,b)<<endl;
    return 0;
}
