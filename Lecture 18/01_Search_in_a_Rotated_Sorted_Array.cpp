//Search in a rotated sorted array
//Leetcode 33
//Brute Force Approach...Linear Search i.e. O(n)
//We will use more optimised Binary Search
//eg:[3,4,5,6,7,0,1,2] ,tar=0
#include <iostream>
#include <vector>
using namespace std;

int rotated_SortArray(vector<int> nums,int tar){
    int st=0,end=nums.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==tar){
            return mid;
        }
        else if(nums[st]<=nums[mid]){
            if(nums[st]<=tar && tar<=nums[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if(nums[mid]<=tar && tar<=nums[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }                     
    return -1;                                                                                                                                                                                                                          
}

int main(){
    vector<int> nums={3,4,5,6,7,0,1,2};
    int tar=0;
    cout<<"Target at index :"<<rotated_SortArray(nums,tar)<<endl;
    return 0;
}