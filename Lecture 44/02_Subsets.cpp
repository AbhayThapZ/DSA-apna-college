//LEETCODE 78   
#include <iostream>
#include <vector>
using namespace std;
void getAllSubsets(vector<int> &nums,vector<int>& ans,int i,vector<vector<int>> &allSubsets){
    if(i==nums.size()){
        allSubsets.push_back({ans});
        return;
    }
    //include
    ans.push_back(nums[i]);
    getAllSubsets(nums,ans,i+1,allSubsets);
    //exclude
    ans.pop_back();
    getAllSubsets(nums,ans,i+1,allSubsets);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allSubsets;
    vector<int> ans;
    getAllSubsets(nums,ans,0,allSubsets);
    return allSubsets;
}
int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>> ans=subsets(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}