#include <iostream>
#include <string>
using namespace std;

// void fun(){
//     static int x=0;
//     //init statement run once only and save all the states of the x
//     cout<<"X:"<<x<<endl;
//     x++;
// }
// class A{
// public:
//     int x;
//     void incX(){
//         x++;
//     }
// };

class ABC{
public:
    ABC(){
        cout<<"Constructor"<<endl;
    }
    ~ABC(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    if(true){
        static ABC obj;
    }
    cout<<"End of the main Function"<<endl;
    // A obj1;
    // obj1.x=100;
    // cout<<obj1.x<<endl;
    // obj1.incX();
    // cout<<obj1.x<<endl;
    // A obj2;
    // obj2.x=100;
    // cout<<obj2.x<<endl;
    // obj2.incX();
    // cout<<obj2.x<<endl;
    // fun();
    // fun();
    // fun();
    // fun();
    // fun();
    return 0;
}