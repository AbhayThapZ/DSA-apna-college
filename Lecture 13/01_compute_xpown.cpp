// Compute X to the pow n:X^n
//use Binary Exponential
//Leetcode ques 50
//Note: n(decimal number)=logn base 2 + 1(binary form max number of digits) use this approach
#include <iostream>
using namespace std;
double myPow(double x,int n){
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1;
    if(x==-1 && n%2==0)  return 1.0;
    if(x==-1 && n%2!=0) return -1.0;
    long binForm=n;
    double ans=1;
    if(n<0){
        x=1/x;//inverse because of negative power
        binForm=-binForm;//turn negative power into positive
    }
    while(binForm>0){
        if(binForm%2==1){
            ans*=x;
        }
        x*=x; 
        binForm/=2;//right shift
    }//O(logn)
    return ans;
}
int main(){
    int n=5;//binary form of power
    double x=3.0;//powers decimal number
    cout<<"Power is:"<<myPow(x,n)<<endl;
} 
//don't get confused , compiler automatically take all values into binary form