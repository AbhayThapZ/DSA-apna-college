// Sorting array with 0's,1's and 2's
// leetcode ques 75 Sort Colors
// eg=[2,0,2,1,1,0,1,2,0,0] into [0,0,0,0,1,1,1,2,2,2]
#include <iostream>
#include <vector>
// #include <algorithm> don't use sort function
// this comes in brute force approach
#include <climits>
using namespace std;

void sortColors(vector<int>& nums){
    int n=nums.size();
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0)count0++;
        if(nums[i]==1)count1++;
        if(nums[i]==0) count2++;
    }
    int idx=0;
    for(int i=0;i<count0;i++){
        nums[idx++]=0;
    }
    for(int i=0;i<count1;i++){
        nums[idx++]=1;
    }
    for(int i=0;i<count2;i++){
        nums[idx++]=2;
    }
    return;
}

int main(){
    vector<int> nums={2,0,2,1,1,0,1,2,0,0};
    int n=nums.size();
    sortColors(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}
//Time Complexity :O(n) two passes