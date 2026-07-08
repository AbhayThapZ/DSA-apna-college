#include <iostream>
#include <vector>
#include <set>
using namespace std;
void getAllCombinations(vector<int>& candidates,int idx,int target,vector<vector<int>>& ans,vector<int>& combine){
    set<vector<int>> s;                                  
    if(idx==candidates.size() || target<0) return;
        if(target==0){
            if(s.find({combine})==s.end()){
                ans.push_back({combine});
                s.insert({combine});
            }
            return;
        }
        combine.push_back(candidates[idx]);
        //single inclusion
        getAllCombinations(candidates,idx+1,target-candidates[idx],ans,combine);
        //multiple inclusion
        getAllCombinations(candidates,idx,target-candidates[idx],ans,combine);
        //exclusion
        combine.pop_back();//backtracking
        getAllCombinations(candidates,idx+1,target,ans,combine);

    }
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> combine;
    getAllCombinations(candidates,0,target,ans,combine);
    return ans;
}

int main(){
    vector<int>candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans=combinationSum(candidates,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

