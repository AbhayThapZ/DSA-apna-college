//print odd numbers sum
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int oddSum=0;
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            oddSum+=i;
        }
    }
    /*using while loop
    int i=0;
    while(i<=n){
         if(i%2!=0){
             oddSum+=i;
             i++
         }
     }
    */
    /*sum for even number sum
    evenSum=0;
    for(int i=0;i<=n;i++){
         if(i%2==0){
             evenSum+=i;
         }
     }
    */
    cout<<oddSum;
    return 0;
}