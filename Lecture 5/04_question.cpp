//Sum of n FACTORIAL
#include <iostream>
using namespace std;
int fact_OF_N(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    cout<<"Factorial of 5:"<<fact_OF_N(5);
    return 0;
}