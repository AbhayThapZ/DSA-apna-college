#include <iostream>
using namespace std;
// void is_Armstrong(int n){
bool is_Armstrong(int n){
    int sum=0;
    int num=n;
    while(n>0){
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    // if(sum==num){
        // cout<<"Armstrong"<<endl;
        // return true;
    // }else{
        // cout<<"Not Armstrong"<<endl;
        // return false;
    // }
    return sum==num;
}
int main(){
    int n=153;
    if(is_Armstrong(n)){
        cout<<"Armstrong\n";
    }else{
        cout<<"Not Armstrong";
    }
    return 0;
}