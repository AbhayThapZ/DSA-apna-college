#include <iostream>
using namespace std;
int main(){
    // int marks[100]; 100 is length , 0 to 99 indexing/position i.e. zero to size/length - 1 
    // double price[65];
    int marks[5]={99,100,54,36,88};//full
    double price[]={99.99,105.65,30.00};//3

    marks[0]=101;//changed index 0 value
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    
    cout<<marks[-1]<<endl;//invalid index will give garbage value
    return 0;
}