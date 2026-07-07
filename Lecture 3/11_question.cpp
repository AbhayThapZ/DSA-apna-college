//factorial of n numbers
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int sumFactorial=1;
    for (int i=1;i<=n;i++){
        sumFactorial*=i;
    }
    cout<<sumFactorial;
    return 0;
}