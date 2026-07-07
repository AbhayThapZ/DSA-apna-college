#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow=nums[0];
    int fast=nums[0];
    do{
        slow=nums[slow];//+1
        fast=nums[nums[fast]];//+2
    }while(slow!=fast);
    slow=nums[0];
    while(slow!=fast){
        slow=nums[slow];//+1
        fast=nums[fast];//+1
    }
    return slow;//O(n)O(1)
    // unordered_set<int> s;
    // for(int val : nums){
    //     if(s.find(val)!=s.end()){
    //         return val;
    //     }
    //     s.insert(val);
    // }
    // return -1;//O(n)O(n)
}

int main(){
    vector<int> nums={3,2,3,1,5};
    cout<<"Duplicate Number:"<<findDuplicate(nums);
    return 0;
}