//Selection sorting
#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int nums[],int n){
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[smallestIdx]) smallestIdx=j;
        }
        swap(nums[i],nums[smallestIdx]);
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
    selectionSort(nums,n);
    printArray(nums,n);
    return 0;
}
//Time Complexity:O(n^2)