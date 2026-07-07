//Decimal to Binary code of 2 to 9 decimal numbers

#include <iostream>
using namespace std;

int decimal_To_Binary(int decNum){
    int rem;
    int ans=0;
    int pow=1;//we will update this value from 10 pow 0 to 10 pow 1 to 10 pow 2 and so on...
    while (decNum>0){//till coefficient becomes 0
        rem=decNum%2;//gives the remainder of continuous devision with 2
        decNum=decNum/2;//changes the value of decimal number to permanent divided value by 2
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
    for(int i=2;i<=9;i++){
        cout<<"Binary value of "<<i<<" Decimal Number is "<<decimal_To_Binary(i)<<endl;
    }
    return 0; 
}