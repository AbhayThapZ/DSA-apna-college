//WAF to reverse an Integer n
#include <iostream>
using namespace std;

void reverse_Of_N(int num){//just print the removed last values
    int rev;
    int lastvalue;
    while(rev!=num){
        lastvalue=num%10;
        num/=10;
        rev=lastvalue;
        if(rev==0){
            break;
        }
        cout<<rev;
    }
    cout<<endl;
}
int reverse_Of_M(int num){//here we are creating a new variable and storing the reverse value in it
    int newNum=0;
    int lastvalue;
    while(num>0){
        lastvalue=num%10;
        newNum=newNum*10+lastvalue;//left shifting num and then adding last value to the left shifted value
        num/=10;
    }
    return newNum;
}
int main(){
    int n=1233;
    reverse_Of_N(n);
    cout<<reverse_Of_M(n);
    return 0;
}