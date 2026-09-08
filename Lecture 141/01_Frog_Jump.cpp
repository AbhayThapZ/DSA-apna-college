#include <iostream>
#include <vector>
using namespace std;

int minCost(vector<int>& height) {//TC: O(n) SC: O(1)
    // Implementation for minimum cost calculation
    int n=height.size();

    if(n==1) return 0;

    // vector<int> dp(n); //dp[i]= minimum cost to reach stone i

    // dp[0]=0;
    // dp[1]=abs(height[1]-height[0]);

    int prev1=0;
    int prev2=abs(height[1]-height[0]);
    int result=prev2;

    for(int i=2;i<n;i++){
        // int jump1=dp[i-1]+abs(height[i]-height[i-1]);
        // int jump2=dp[i-2]+abs(height[i]-height[i-2]);

        int jump1=prev2+abs(height[i]-height[i-1]);
        int jump2=prev1+abs(height[i]-height[i-2]);

        // dp[i]=min(jump1, jump2);

        result=min(jump1, jump2);
        prev1=prev2;
        prev2=result;
    }

    // return dp[n-1];
    return result;
}

int main(){
    vector<int> height={30,20,50,10,40};//30
    // vector<int> height2={20,30,40,20};//20

    cout<<minCost(height)<<endl;
    return 0;
}