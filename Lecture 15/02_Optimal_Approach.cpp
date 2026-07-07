//Leetcode question 238
//Product of array except self
//Optimal Approach approach
#include <iostream>
#include <vector>
using namespace std;
vector<int> ProdOfArrExcSelf(vector<int> nums){ 
    int n=nums.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    //prefix
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    //suffix
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }
    //ans
    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
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
//Space Complexity:O(n)