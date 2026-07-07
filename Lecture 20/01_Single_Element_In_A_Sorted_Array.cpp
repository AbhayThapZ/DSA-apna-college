//Single element in a sorted array
//LeetCode 540
//eg: Case1.[1,1,2,3,3,4,4,8,8], Case2.[3,3,7,7,10,11,11]
//Approaches:
//1.Linear Search (O(n))
//2.Bitwise Operators (O(n))
//3.Binary Search (most Optimised) (O(log n))
#include <iostream>
#include <vector>
using namespace std;

int singleEle(vector<int> nums){
    int n=nums.size();
    if(n==1) return nums[0];
    int st=0; int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && nums[mid]!=nums[1]) return nums[mid];//mid=0
        if(mid==(n-1) && nums[mid]!=nums[n-2]) return nums[mid];//mid=n-1

        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];

        if(mid%2==0){
            if(nums[mid]==nums[mid-1]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if(nums[mid]==nums[mid-1]){
                st=mid+1;
            }else{
               end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums={1,1,2,3,3,4,4,8,8};
    cout<<"Single Element :"<<singleEle(nums);
    return 0;
}