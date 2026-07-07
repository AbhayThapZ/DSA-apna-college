//sum of 1 to n numbers
#include <iostream>
using namespace std;
int main(){
    int a=2500;
    int sum=0;
    for(int i=0;i<=a;i++){
        sum+=i;
        if(i==5){
            break;
        }
    }
    cout<<"sum of 1 to n numbers "<<sum;
    return 0;
}
/*
using while loop
int i=0;
while(i<=a){
        sum+=i;
        i++;
    }
    cout<<"sum of 1 to n numbers "<<sum;
    return 0;

*/