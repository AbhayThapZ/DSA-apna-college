//Calculate the nCr of binomial cofficient n & r (tough according to me)
/*
eg:
if n=8 and r=2
the nCr is n!/2!(n-r)!
*/
#include <iostream>
using namespace std;

int factorial(int n){//gives factorial of any number
    int fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n,int r){//find the binomial cofficient or nCr
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_n_r=factorial(n-r);
    return fact_n/(fact_r*fact_n_r);
}

int main(){
    int n=8,r=2;
    cout<<"Binomial Coffiecient of nCr where n = 8 and r = 3 is "<<nCr(n,r);
    return 0;
}