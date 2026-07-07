//check whether a number is prime or not
#include <iostream>
using namespace std;
int main(){
    int num=7;
    bool isPrime=true;
    for (int i=2;i<=(num-1);i++){    //for (int i=2;i*i<=num;i++){ easier method for root num * root num
        if(num%2==0){
            isPrime=false;
            break;
        }
    }
    cout<<"Number is Prime? "<<isPrime;//1=true,0=false
}