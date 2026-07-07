//used to calculate GCD/HCF 
#include <iostream>
using namespace std;

//recursion(did't studied yet)
int gcdrec(int a ,int b){
    //assume a is greater than b
    if(b==0) return a;
    gcdrec(b,a%b);
}

int lcm(int a,int b){
    int gcd=gcdrec(a,b);
    return (a*b)/gcd;
}

int main(){
    int a=20,b=28;
    cout<<lcm(a,b)<<endl;
    return 0;
}
