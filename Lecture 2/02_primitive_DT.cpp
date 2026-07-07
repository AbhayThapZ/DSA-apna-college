#include <iostream>
using namespace std;
int main(){
    int age=25;//this will be taking space in memo and will get saved there,name will be same but value can be changed
    char grade='A';
    float price=3.14f;
    double price2=3.14;
    bool isSafe=false;//can also be written as capital f=F and it shows the compiler difference between float and double
    //variable name is also called identifier
    //can't save variable without type of the variable like int,float,bool,char,etc
    cout<<"age="<<age<<"\n"<<sizeof(age)<<endl;// see the diff. between the with and without double coutes
    cout<<grade<<endl;
    cout<<price<<endl;
    cout<<isSafe<<endl;//true -> 1 and false -> 0
    cout<<price2<<endl;//true -> 1 and false -> 0
    //int take 4 bytes or 8*4 bits
    //char take 1 bytes or 8*1 bits 
    //float take 4 bytes or 8*4 bits
    //bool take 1 bytes or 8*1 bits
    //double take 8 bytes or 8*8 bits   
    //reserves the space but it does'nt means that they contain value
    return 0;
}
//the value of A-Z OR a-z is converted and saved as an ascii code in memory by compiler