#include <iostream>
using namespace std;

void changeArray(int arr[]/*original array is passed...not its copy like in pass by value*/,int size){
    cout<<"in function\n";
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];//updation in arary
    }
}

int main(){
    int arr[]={1,2,3};
    changeArray(arr,3);

    cout<<"in main\n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    //array name is implicitly a pointer...hence arr array stores the address of first value stored in it
    return 0;
}