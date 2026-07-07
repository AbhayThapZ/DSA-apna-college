//bubble sorting
#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int nums[],int n){
    for(int i=0;i<n-1;i++){//O(n^2)
        bool isSwap=false;
        //when there is no swaping done, means elements are already in sorted order
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1])
                swap(nums[j],nums[j+1]);
                isSwap=true;
        }
        if(!isSwap) return ;//already sorted array
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
    bubbleSort(nums,n);
    printArray(nums,n);
    return 0;
}
//Time Complexity:O(n^2)