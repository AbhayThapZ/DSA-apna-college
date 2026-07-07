#include <iostream>
#include <cmath>
using namespace std;
void printDigits(int n){
    int count=0;
    int sum=0;
    while(n>0)//O(log n) base 10
    {
        int digit=n%10;
        cout<<digit<<endl;
        n/=10;
    
        // int digit=n%10;
        // sum+=digit;
        // n/=10;
        // count++;
        // n/=10;
    }
    // cout<<count<<endl;
    // cout<<sum<<endl;
}
int main(){
    int n=3586;
    printDigits(n);
    //shortcut for number of digits
    cout<<(int)(log10(n)+1)<<endl;
    return 0;
}