//using moores voting algorithm
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int majority_Elements(vector<int> nums){
    int n=nums.size();
    int freq=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++; 
        }else{
            freq--;
        }     
    }
    //for checking whether if the returned ans is really ME or not
    // int count=0;
    // for(int val:nums){
    //     if(val==ans){
    //         count++;
    //     }
    //     if(count>n/2){
    //         return ans;
    //     }else{
    //         return -1;
    //     }
    // }
    return ans;
}

int main(){
    vector<int> nums={1,2,1,1,2};//contains two types of constants only 
    int freq=majority_Elements(nums);
    cout<<"Majority Element:"<<freq<<endl;
    return 0;
}