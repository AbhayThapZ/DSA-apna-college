#include <iostream>
using namespace std;
int main(){
    float price=100.25f;
    float* ptr=&price;//pointer
    float** ptr2=&ptr;//pointer to pointer 

    cout<<price<<endl;
    cout<<ptr<<endl;//address of a 
    cout<<ptr2<<endl;//address of ptr 
    cout<<endl;
    
    cout<<&price<<endl;//0x61ff0c 0-9 and a-f and 0x means address
    cout<<&ptr<<endl;//address of ptr
    cout<<&ptr2<<endl;//address of ptr2
    cout<<endl;
    
    cout<<ptr<<endl;//ptr
    cout<<*(ptr2)<<endl;//same as ptr
    cout<<**(ptr2)<<endl;//same as price
    cout<<endl;
    
    cout<<*(&price)<<endl;//same as price
    cout<<*(&ptr)<<endl;//same as ptr
    cout<<*(&ptr2)<<endl;//same as ptr2
    cout<<endl;
    //* of pointer and * of dereference are different
    //* is dereferencing operator and & is ampercent

    int* ptr3;//pointer points to nowhere
    cout<<ptr3<<endl;//will give garbage value
    ptr3=NULL;
    cout<<ptr3<<endl;//will give 0,means nothing is assigned
    cout<<endl;
    //will give segmentation fault if we try to dereference this null pointer
    return 0; 
}