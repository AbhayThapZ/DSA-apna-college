#include <iostream>
using namespace std;
string prime_nums(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return "NOT PRIME";
    }
    return "PRIME";
}
int main(){
    int num=16;
    cout<<prime_nums(num)<<endl;
    return 0;
}