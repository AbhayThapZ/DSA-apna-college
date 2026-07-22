//Leetcode 134
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0;
        int totalCost=0;

        int start=0;
        int currGas=0;

        for(int i=0;i<gas.size();i++){
            totalGas+=gas[i];
            totalCost+=cost[i];
            currGas+=(gas[i]-cost[i]);
            if(currGas<0){
                start=i+1;
                currGas=0;
            }
        }
        return totalGas<totalCost? -1:start;
    }
};

int main(){
    vector<int> gas={1,2,4,5,9};
    vector<int> cost={3,4,1,10,1};
    Solution sol;
    int ans=sol.canCompleteCircuit(gas,cost);
    cout<<"Starting station is:"<<ans<<endl;
    return 0;
}