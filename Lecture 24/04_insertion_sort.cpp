//Insertion sorting
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int nums[],int n){
    for(int i=1;i<n;i++){
        int curr=nums[i];
        int prev=i-1;
        while(prev>=0&&nums[prev]>curr){//for decresing order change the comaprison operator to inverse like > to <
            nums[prev+1]=nums[prev];
            prev--;
        }
        nums[prev+1]=curr;//placing the curr element in its correct position
    }
    return; 
}
void printArray(int nums[],int n){
    for(int i=0;i<n;i++){//O(n)
        cout<<nums[i]<<endl;
    }
    return;
}

int main(){
    int nums[]={4,1,5,2,3};
    int n=5;
    insertionSort(nums,n);
    printArray(nums,n);
    return 0;
}
//Time Complexity:O(n^2)