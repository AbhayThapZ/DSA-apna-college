//check whether a number is prime or not
#include <iostream>
using namespace std;
void prime_Checker(int n){
    if (n==1 || n==2){
        cout<<n<<" is Prime";
        return ;
    }
    for (int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" Not Prime";
            return ;
        }else{
            cout<<n<<" is Prime";
            return ;
        }
    }
}
int main(){
    int n;
    cout<<"Enter your value:";
    cin>>n;
    prime_Checker(n);
    return 0;
}