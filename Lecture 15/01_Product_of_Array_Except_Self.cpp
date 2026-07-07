//Leetcode question 238
//Product of array except self
//we can't use division operator
//Bryte force approach
#include <iostream>
#include <vector>
using namespace std;

vector<int> ProdOfArrExcSelf(vector<int> nums){
    int n=nums.size();
    vector<int> ans(n,1);
    for(int i=0;i<nums.size();i++){
        //int prod=1;
        for(int j=0;j<nums.size();j++){
            if(i!=j){
                ans[i]*=nums[j];//prod*=nums[j]
            }
        }
        //ans.push_back();
    }
    return ans;
}

int main(){
    vector<int> nums={1,2,3,4};
    cout<<"Except Self Products Are : ";
    for(int val:ProdOfArrExcSelf(nums)){   
        cout<<val<<" ";
    }
    return 0;
}
//Time Complexity:O(n^2)