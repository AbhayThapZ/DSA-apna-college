//Peak Index In Mountain Array
//Leetcode 852
//eg:[0,3,8,9,5,2]
//brute Force Approach: Linear Search
//optimised Approach: Binary Search
#include <iostream>
#include <vector>
using namespace std;

int peakEle(vector<int> nums){
    int st=1,end=nums.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;
        }else if(nums[mid]>nums[mid-1]){//increasing to right
            st=mid+1;
        }else{//decreasing to left
            end=mid-1;
        }
    }
}

int main(){
    vector<int> nums={0,3,9,8,5,2};
    cout<<"Peak Element At Index: "<<peakEle(nums)<<endl;
    return 0;
}