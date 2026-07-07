#include <iostream>
using namespace std;

void printNumbers(int n){
    if(n==1){
        cout<<n<<"\n";
        return;
    }
    cout<<n<<" ";
    printNumbers(n-1);
}
int main(){
    int n=4;
    printNumbers(n);
    return 0;
}