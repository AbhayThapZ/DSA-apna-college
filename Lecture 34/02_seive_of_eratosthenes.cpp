#include<iostream>
#include <vector>
using namespace std;
int countPrimes(int n) {
    vector<bool> isPrime(n+1,true);
    int countPrime=0;
    for(int i=2;i<n;i++){
        if(isPrime[i]) {
            countPrime++;
            for(int j=i*2;j<n;j+=i){
                isPrime[j]=false;
            }
        }
    }
    return countPrime;
}
int main(){
    int n=50;
    cout<<countPrimes(n)<<endl;
    return 0;
}