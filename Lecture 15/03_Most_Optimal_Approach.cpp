//Leetcode question 238
//Product of array except self
//Most Optimal Approach approach (with space complexity)

#include <iostream>
#include <vector>
using namespace std;

vector<int> ProdOfArrExcSelf(vector<int> nums){ 
    int n=nums.size();
    vector<int> ans(n,1);
    //prefix
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    //suffix
    for(int i=n-2;i>=0;i--){
        suffix*=nums[i+1];
        ans[i]*=suffix;
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
//Time Complexity:O(n)
//Space Complexity:O(1)