#include <iostream>
using namespace std;
//we will use 2 pointer approach here
void reverse_Of_Array(int arr[],int size){
    int start=0;
    int end=size-1;//7 position 
    //start++ and last-- in every iteration...
    while(start<end){// for both odd and even array
        //odd arraymid variable will not get swapped
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return;
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    reverse_Of_Array(arr,size); 
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//Time Complixity:O(n)