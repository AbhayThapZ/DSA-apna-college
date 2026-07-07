#include <iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
    //increment(++)/decrement(--)
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;//+4
    
    ptr--;
    cout<<ptr<<endl;//-4

    //add/substract
    //used in arrays
    ptr=ptr+2;
    cout<<ptr<<endl;//+8
    
    ptr=ptr-2;
    cout<<ptr<<endl;//-8

    int arr[]={1,2,3,4,5};
    cout<<*arr<<endl;//1
    cout<<*(arr+1)<<endl;//2
    cout<<*(arr+2)<<endl;//3
    cout<<*(arr+3)<<endl;//4
    cout<<*(arr+4)<<endl;//5
    cout<<endl;

    //pointer substract
    int* ptr1;
    int* ptr2=ptr1+2;//+8 bytes or +2 intergers location 
    cout<<ptr2-ptr1<<endl;
    //if ptr1 is at 100 and ptr 2 is at 108, then the substract will give 2 interger space or 8 bytes 
    cout<<endl;

    //compare(uses relatonal operators)
    int* pt1;
    int* pt2;
    cout<<pt1<<endl;
    cout<<pt2<<endl;

    cout<<(pt1>pt2)<<endl;//0 false and 1 true
    cout<<(pt1==pt2)<<endl;//0 false and 1 true
    cout<<(pt1<pt2)<<endl;//0 false and 1 true
    cout<<(pt1<=pt2)<<endl;//0 false and 1 true
    cout<<(pt1>=pt2)<<endl;//0 false and 1 true
    cout<<(pt1!=pt2)<<endl;//0 false and 1 true
    return 0;
}