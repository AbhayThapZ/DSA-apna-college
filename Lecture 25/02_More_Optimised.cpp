// Sorting array with 0's,1's and 2's
//using dutch national flag alogorithm
// leetcode ques 75 Sort Colors
// eg=[2,0,2,1,1,0,1,2,0,0] into [0,0,0,0,1,1,1,2,2,2]
#include <iostream>
#include <vector>
// #include <algorithm> 
// don't use sort function
// this comes in brute force approach
#include <climits>
using namespace std;

void sortColors(vector<int>& nums){
    int low=0;
    int mid=0;
    int high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
            high--;
        }
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
//Time Complexity :O(n) single passes