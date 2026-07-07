#include <iostream>
using namespace std;
int main(){
    // int marks[5]={99,100,54,36,88};//full
    int size=5;

    //loop 0 to size - 1
    
    int marks[5];
    //input
    for(int i=0;i<size;i++){
        cin>>marks[i];
    }
    //output
    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }
    cout<<sizeof(marks)<<endl;//20=4 bytes * 5
    cout<<sizeof(marks)/sizeof(int)<<endl;//20=4 bytes * 5
    return 0;
}