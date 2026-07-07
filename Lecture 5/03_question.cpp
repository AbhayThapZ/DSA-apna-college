//calculate sum of numbers from 1 to N
#include <iostream>
using namespace std;
int sum_1_To_N(int n){
    int sum=0;
    for (int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<"Sum from 1 to 15: "<<sum_1_To_N(15);
    return 0;
}