//Binary to Decimal

#include <iostream>
using namespace std;

int binary_To_Decimal(int biNum){
    int lastDigit;
    int ans=0;
    int pow=1;//2 Pow 0
    while (biNum>0){//
        lastDigit=biNum%10;//gives last value
        ans+=(lastDigit*pow);//updation
        biNum=biNum/10;//removes last value
        pow*=2;//updation
    }
    return ans;
}
int main(){
    int n=1010;
    cout<<"Decimal value of "<<n<<" Binary Number is "<<binary_To_Decimal(n)<<endl;
    return 0; 
}