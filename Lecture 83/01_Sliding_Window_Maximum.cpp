//Leetcode 239
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> res;

        //1st window
        for(int i=0;i<k;i++){//O(k)
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        for(int i=k;i<nums.size();i++){//O(n-k)
            res.push_back(nums[dq.front()]);

            //remove elements which are not part of current window
            while(dq.size()>0 && dq.front()<=i-k){
                dq.pop_front();
            }

            //remove smaller value
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);
        return res;
    }
};

int main(){
    vector<int> nums={1,3,-1,-3,5,3,6,7};
    Solution sol;
    vector<int> ans=sol.maxSlidingWindow(nums,3);
    for(int i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}