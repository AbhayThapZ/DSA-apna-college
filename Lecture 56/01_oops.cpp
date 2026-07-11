#include <iostream>
#include <string>
using namespace std;

class Teacher{
//properties or attribute
// protected:
    string name;
    string dept;
    string subject;
private:
    double salary;
public:
    //non-parameterized
    // Teacher(){
    //     dept="CS";
    // }

    //parameterized
    Teacher(string name,string dept,string subject,double salary){
        

        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
        // name=n;
        // dept=d;
        // subject=s;
        // salary=sal;
    }
    //copy constructor
    Teacher(Teacher &originalObj){
        cout<<"Custom copy constructor"<<endl;
        this->name=originalObj.name;
        this->dept=originalObj.dept;
        this->subject=originalObj.subject;
        this->salary=originalObj.salary;
    }

    //methods or member functions
    void changeDept(string newDept){
        dept=newDept;
    }

    void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Subject:"<<subject<<endl;
    }
    // //setter function used to set private values
    // void setSalary(double s){
    //     salary=s;
    // }
    // //getter function used to get private values
    // double getSalary(){
    //     return salary;
    // }
};

//Encapsulation
// class Account{
// private:    
//     double amount;
//     string password;//data hiding
// public:
//     string accountId:
//     string username;
// };

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name,double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }

    //destructor
    ~Student(){
        cout<<"Delete Everything"<<endl;
        delete cgpaPtr; //memory leak ... if not delete
    }

    // Student(Student &ob){//shallow copy
    //     this->name=ob.name;
    //     this->cgpaPtr=ob.cgpaPtr;
    // }
    // Student(Student &ob){//deep copy
    //     this->name=ob.name;
    //     cgpaPtr=new double;
    //     *cgpaPtr=*ob.cgpaPtr;
    // }


    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Abhay",8.9);
    s1.getInfo();

    // Student s2(s1);
    // s2.name="neha";
    // *(s2.cgpaPtr)=9.2;
    // s2.getInfo();

    // Teacher t2;
    // Teacher t3;
    // Teacher t1;//constructor call
    // t1.name="Abhay";
    // t1.subject="C++";
    // // t1.dept="CS";
    // t1.setSalary(10000);
    // cout<<t1.name<<endl;
    // cout<<t1.dept<<endl;
    // cout<<t1.getSalary()<<endl;
    // Teacher t1("Abhay","CS","C++",10000.0);
    // t1.getInfo();
    // Teacher t2(t1);//default copy constructor
    // t2.getInfo();
    return 0;
}