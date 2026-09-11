#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

double ZeroOne_Knapsack_Recursion(vector<vector<int>>& items,int W,int n){
    if(n==0 || W==0) return 0;
    int val=items[n-1][0];
    int wt=items[n-1][1];
    if(wt<=W){
        int include=val+ZeroOne_Knapsack_Recursion(items,W-wt,n-1);
        int exclude=ZeroOne_Knapsack_Recursion(items,W,n-1);
        return max(include,exclude);
    }else{
        return ZeroOne_Knapsack_Recursion(items,W,n-1);
    }
}

double ZeroOne_Knapsack_MemoDP(vector<vector<int>>& items,int W,int n,vector<vector<int>>& dp){
    if(n==0 || W==0) return 0;

    if(dp[n][W]!=-1) return dp[n][W];

    int val=items[n-1][0];
    int wt=items[n-1][1];

    if(wt<=W){
        int include=val+ZeroOne_Knapsack_MemoDP(items,W-wt,n-1,dp);
        int exclude=ZeroOne_Knapsack_MemoDP(items,W,n-1,dp);
        return max(include,exclude);
    }else{
        return ZeroOne_Knapsack_MemoDP(items,W,n-1,dp);
    }
}

double ZeroOne_Knapsack_TabuDP(vector<vector<int>>& items,int W,int n){
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));

    for(int i=1;i<=n;i++){//i items
        for(int j=1;j<=W;j++){// j capacity knapsack
            int val=items[i-1][0];
            int wt=items[i-1][1];

            if(wt<=j){
                dp[i][j]=max(val+dp[i-1][j-wt],dp[i-1][j]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}

int main(){
    vector<vector<int>> items={
        {20,2},
        {30,3},
        {50,4},
        {60,5},
        {100,9}
    };//val,wt

    int W=10;

    vector<vector<int>> dp(items.size()+1,vector<int>(W+1,-1));

    cout<<ZeroOne_Knapsack_Recursion(items,W,items.size())<<endl;
    cout<<ZeroOne_Knapsack_MemoDP(items,W,items.size(),dp)<<endl;
    cout<<ZeroOne_Knapsack_TabuDP(items,W,items.size())<<endl;
    return 0;
}