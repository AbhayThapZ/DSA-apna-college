#include <iostream>
using namespace std;
int main(){
    //arithemitic operator
    int a=10,b=5;
    int sum=a+b;//-,*(asterisk),/,%(modulo)...
    //if we divide in cpp (5/2) = 2 but in mathematics it give 2.5, because type of variable in integer
    //for decimal answer of output if we want the , float/double divide integer or vice versa
    //or we can also type cast in this type of condition  cout<<(5/(double)2)<<endl
    cout<<sum<<endl;//can also write (a+b) here instead of sum

    //relational operator
    cout<<(3<5)<<endl;//>,==,!=,>=,<=...
    //= is for assignment, == is for relational check
    //!= for not equals to something
    //output will always be true or false, in terminal 1 or 0

    //logical operator
    cout<<!(3<5)<<endl;
    cout<<(!(3<5)||(3<5))<<endl;
    cout<<(!(3<5)&&(3<5))<<endl;
    //NOT=TRUE TO FALSE AND FALSE TO TRUE
    //OR -> ||,AND -> &&(AMPERSAND), NOT -> !, more discription in next chapter

    //unary operator
    //increment++
    int __a =5;
    cout<<(__a++)<<endl;//post increment the value by 1,kaam -> update
    cout<<(++__a)<<endl;//pre increment the value by 1,update -> kaam
    //decrement--
    cout<<(__a--)<<endl;//post decrement the value by 1
    cout<<(--__a)<<endl;//pre decrement the value by 1

    int _a=5;
    int _b=_a++;
    cout<<(_a)<<"\n"<<(_b)<<endl;
    int ___a=5;
    int ___b=++___a;
    cout<<(___a)<<"\n"<<(___b);
    //other operators will be covered in binary number system
    return 0;
}