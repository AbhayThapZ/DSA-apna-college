//pairsum: in a sorted array returns the pair of two numbers (or there index) which are inside a array(vector) and there sum is equal to the target
//here we are using brute force approach
#include <iostream>
#include <vector>
using namespace std;
vector<int> pair_Sum(vector<int> nums,int target){
    vector<int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                //return he index ,for returning the contant stored at the index write arr[i] and arr[j]
                return ans;
            }
        }
    }
    return ans;//if no answer existes, return an empty vector
}
int main(){
    vector<int> nums={2,7,11,15};
    int target=13;
    vector<int> ans=pair_Sum(nums,target);
    cout<<"Pair:"<<ans[0]<<","<<ans[1];
    return 0;
}
//here we did'nt took the advantage of the sorted array part