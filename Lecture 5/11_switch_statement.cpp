#include <iostream>
using namespace std;
//switch works only on int ,char and enum
int main(){
    int value;
    cout<<"Enter your value from 1 to 3 :";
    cin>>value;
    switch(value){
        case 1:
            cout<<"You Entered ONE...";
            break;//stop execution of switch
        case 2:
            cout<<"You Entered TWO...";
            break;//stop execution of switch
        case 3:
            cout<<"You Entered THREE...";
            break;//stop execution of switch
        default:
            cout<<"Invalid Input...";
            break;
    }
    return 0;
}
//break only exists from the current loop or switch statement not from the whole function