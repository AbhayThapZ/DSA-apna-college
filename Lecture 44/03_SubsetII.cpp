#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void getAllSubsets(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>& allSubsets){
    if(i==nums.size()){
        allSubsets.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    getAllSubsets(nums,ans,i+1,allSubsets);
    ans.pop_back();
    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]){
        idx++;
    }
    getAllSubsets(nums,ans,idx,allSubsets);
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> allSubsets;
    vector<int> ans;
    getAllSubsets(nums,ans,0,allSubsets);
    return allSubsets;
}
int main(){
    vector<int> nums={1,1,1,1,2,2,2,3,3};
    vector<vector<int>> ans=subsetsWithDup(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}