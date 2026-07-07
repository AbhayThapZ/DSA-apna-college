//1.with the use of pointers
//2.with the use of references
#include <iostream>
using namespace std;

void changeA(int* ptr){//pass by reference using pointers
    *ptr=20;
}

void changeAA(int& ptr){//pass by reference using reference(alias)
    ptr=30;
}

int main(){
    int a=10;

    changeA(&a);
    cout<<"Inside main Function:"<<a<<endl;

    changeAA(a);
    cout<<"Inside main Function:"<<a<<endl;
    return 0; 
}