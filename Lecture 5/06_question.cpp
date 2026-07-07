//calculate sum of digits of a number {eg: n =123 ;sum of dights => 1+2+3=6 }; %
#include <iostream>
using namespace std;

int sum_Of_N_Digit(int n){
    int digitSum=0;
    while(n>0){
        int lastDigit=n%10;//gives remainder not cofficient
        n=n/10;//gives coefficient or remaining values 
        digitSum+=lastDigit;//stores sum of cofficient and digitSum variable
    }
    return digitSum;
}
int main(){
    int n=12304;
    cout<<"Sum of a Numbers all Digits ="<<sum_Of_N_Digit(n);
    return 0;
}