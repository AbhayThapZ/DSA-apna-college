//Leetcode 70. Climbing Stairs
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    //Tabulation solution
    int climbStairs(int n) {
        if(n==1||n==2) return n;

        // vector<int> dp(n+1);

        // dp[1]=1;
        // dp[2]=2;

        //memory optimization
        int prev2=1;//n-2
        int prev1=2;//n-1

        int result=prev1;
        
        for(int i=3;i<=n;i++){
            //dp[i]=dp[i-1]+dp[i-2];
            result=prev1+prev2;
            prev2=prev1;
            prev1=result;
        }

        // return dp[n];
        return result;
    }
};

//common recursion solution
// int climbStairs(int n) {
//      if(n==1 || n==2) return n;
//          return climbStairs(n-1)+climbStairs(n-2);
//      }


//memoization solution
// int helper(int n,vector<int>& dp){
//         if(n==1 || n==2) return n;

//         if(dp[n]!=-1) return dp[n];

//         return dp[n]=helper(n-1,dp)+helper(n-2,dp);
//     }
// int climbStairs(int n) {
//         vector<int> dp(n+1,-1);
//         return helper(n,dp);
//     }


int main() {
    int n;

    cout << "Enter number of stairs: ";
    cin >> n;

    Solution obj;

    cout << "Number of ways: " << obj.climbStairs(n) << endl;

    return 0;
}