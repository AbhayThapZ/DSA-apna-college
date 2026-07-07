//Next Permutation
//LeetCode ques 31
//eg:A=[1,2,3] return lexicographically next...123,132,213,231,312,321, i.e. 6=n!
//optimal Approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverSe(vector<int> &nums,int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(nums[i++],nums[j--]);
    }
}

void nextPermutation(vector<int> &nums){
    int pivot=-1;
    int n=nums.size();
    //1.Find pivot
    for(int i=n-2 ;i>=0;i--){
        if(nums[i]<nums[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot==-1){//edge case
        //reverse(nums.begin(),nums.end())
        reverSe(nums,n);
        return ;
    }
    //2.Find next Larger Number
    for(int i=n-1;i>pivot;i--){
        if(nums[i]>nums[pivot]){
            swap(nums[i],nums[pivot]);
            break;
        }
    }
    //3.reverse elements from pivot +1 to n-1
    //reverse(nums.begin()+pivot+1,nums.end());
    int i=pivot+1;
    int j=n-1;
    while(i<=j){
        swap(nums[i++],nums[j--]);
    }
}

int main(){
    vector<int> nums={1,2,3,6,5,4};
    //next_permutation(nums.begin(),nums.end()); not good for interview pov
    nextPermutation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}
//Time Complexity : O(n)
//Space Complexity: O(1)