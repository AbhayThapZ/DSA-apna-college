#include <iostream>
#include <string>
using namespace std;

// class Student {
//     //name,age,rollno
// public:
//     string name;
//     Student(){
//         cout<<"Non-Parameterised constructors"<<endl;
//     }
//     Student(string name){
//         this->name=name;
//         cout<<"Parameterised"<<endl;
//     }//constructor overloading 
// };

// class Print{
// public:
//     void show(int x){
//         cout<<"int: "<<x<<endl;
//     }
//     void show(char c){
//         cout<<"char: "<<c<<endl;
//     }
// };//function overloading

class Parent{
public:
    void getInfo(){
        cout<<"Parent Class"<<endl;
    }
    virtual void hello(){
        cout<<"Hello From Parent"<<endl;
    }//virtual functions
};

class Child: public Parent{
public:
    void getInfo(){
        cout<<"Child Class"<<endl;
    }
    void hello(){
        cout<<"Hello form Child"<<endl;
    }//virtual functions
};

int main(){
    Parent p1;
    p1.hello();
    Child c1;
    c1.hello();//virtual functions
    // Parent p1;
    // p1.getInfo();
    // Child c1;
    // c1.getInfo();//function overridding
    // Print p1;
    // p1.show(101);
    // p1.show('A');
    // Student s1("Abhay");
    return 0;
}