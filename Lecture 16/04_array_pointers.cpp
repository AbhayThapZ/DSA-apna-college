//also called constant pointer
#include <iostream>
using namespace std;
int main(){
    int a=15;
    
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;
    cout<<*arr<<endl;
    
    // int a=15;
    // int b=10;
    // int* ptr=&a;
    // ptr=&b;
    //does'nt give any error cause this pointer is not constant and can be changed
    //but this is not possible with arrays
    
    //arr=&a; constant 
    //is not modifiable lvalue ,means its left value can,t be modified cause leftmost index have the arr address
    return 0;
}