//using two pointer approach
#include <iostream>
#include <vector>
using namespace std;
vector<int> pair_Sum(vector<int> nums,int target){
    vector<int> ans;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum>target){
            j--;
        }else if(sum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;//if no answer existes, return an empty vector
}
int main(){
    vector<int> nums={2,7,11,15};
    int target=18;
    vector<int> ans=pair_Sum(nums,target);
    cout<<"Pair:"<<ans[0]<<","<<ans[1];
    return 0;
}
//here we took advantage of sorted part
//time complexity ==O(n)