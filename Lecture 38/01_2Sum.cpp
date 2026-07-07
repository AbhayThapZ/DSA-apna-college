#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n=nums.size();
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int first=nums[i];
        int second=target-first;
        if(m.find(second)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]=i;
    }
    return ans;
}

int main(){
    vector<int> nums={2,5,11,15,7};
    int target=9;
    vector<int> ans=twoSum(nums,target);
    cout<<ans[0]<<":"<<ans[1]<<endl;
    return 0;
}