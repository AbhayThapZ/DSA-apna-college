//WAF to swap the max and min number of an array
#include <iostream>
using namespace std;
void min_max_swap(int arr[],int size){
    int minIndex=0;
    int maxIndex=0;
    for (int i=1;i<size;i++){
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
        if(arr[i]>arr[maxIndex]){
            maxIndex=i;
        }
    }
    swap(arr[minIndex],arr[maxIndex]);
}
int main(){
    int arr[]={2,5,3,1,-2,6};
    int size=6;
    min_max_swap(arr,size);
    cout<<"Printing Final Array:";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}