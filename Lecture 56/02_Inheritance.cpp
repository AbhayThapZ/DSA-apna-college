#include <iostream>
#include <string>
using namespace std;

// class Person{
// public:
//     string name;
//     int age;
    // Person(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }
    // Person(){
    //     cout<<"Parent Constructor"<<endl;
    // }
    // ~Person(){
    //     cout<<"Parent Destuctor"<<endl;
    // }
// };

class Person{
public:
    string name;
    int age;
};
class Student : public Person{
    //name,age,rollno
public:
    int rollno;
    // int rollno;
    // Student(string name,int age,int rollno) : Person(name,age){
    //     // cout<<"Child Constructor"<<endl;
    //     this->rollno=rollno;
    // }

    // ~Student(){
    //     cout<<"Child Destructor"<<endl;
    // }
    // void getInfo(){
    //     cout<<"Name :"<<name<<endl;
    //     cout<<"Age :"<<age<<endl;
    //     cout<<"Roll Number :"<<rollno<<endl;
    // }
    
};//single level inheritance

class Teacher:public Person{
public:
    string subject;
};//Hierarachial Inheritance

// class TA : public Student,public Teacher{

// };//Multiple Inheritance

// class GradStudent:public Student{
// public:
//     string researchArea;
// };//multi level inheritance

int main(){
    // TA t1;
    // t1.name="Abhay";
    // t1.subject="ML";

    // cout<<t1.name<<endl;
    // cout<<t1.subject<<endl;

    // GradStudent s1;
    // s1.name="Abhay";
    // s1.researchArea="Quantun Physics";

    // cout<<s1.name<<endl;
    // cout<<s1.researchArea<<endl;

    // Student s1("Abhay",20,1234);
    // s1.getInfo();
    return 0;
}