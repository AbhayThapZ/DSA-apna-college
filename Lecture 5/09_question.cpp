//WAF to print all the prime numbers from 1 to N
#include <iostream>
using namespace std;

void all_Prime_Till_N(int n){
    if(n==2){
        cout<<n<<" ";
        return;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return;
        }
    }
    cout<<n<<" ";
    return;
}

int main(){
    int n=20;
    for(int i=2;i<=n;i++){
        all_Prime_Till_N(i);//1 is not included because it is conventional
    }
    return 0;
}