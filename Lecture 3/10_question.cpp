//sum of numbers divisible by 3
#include <iostream>
using namespace std;
int main(){
    int limit=10;
    int threeDivisibleSum=0;
    for(int i=3;i<=limit;i++){
        if(i%3==0){
            threeDivisibleSum+=i;
        }
    }
    cout<<threeDivisibleSum;
    return 0;
}