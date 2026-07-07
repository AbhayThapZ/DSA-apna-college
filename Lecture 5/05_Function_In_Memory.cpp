#include <iostream>
using namespace std;
void func(){
    int x=25;
    cout<<"x ="<<x<<endl;
}
int sum(int a, int b){
    a=a+15;
    b=b+20;//change on and b does'nt affect x and y in main
    return a+b;
}
int main(){
    int x=5,y=4;//naming it instead of x and y -> a and b is also correct, this a and b are different from sum function a and b
    func();
    //can't call x directly here
    //cout<<x<<endl; wrong
    cout<<sum(x,y)<<endl;
    cout<<x;
    cout<<y;//values will be same even after sum function call
    return 0;
}//anthing written after return is never executed bcoz it returns control back to main