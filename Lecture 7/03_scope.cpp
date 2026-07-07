#include <iostream>
using namespace std;
int x=10;//global variable..initialized outside all functions even outside main 
void func(){
    cout<<x<<endl;//prints global variables
}
int main()
{

    if(3>1){
        int x=30;//local variable of if block
    }
    {
        int x=3;//local variable of block of code {}
    }
    // cout<<x; will give error becoz x is not accessible outside if block
    //same goes for loop ,function,block of code {}...
    cout<<x<<endl;//prints global variables

    return 0;
}