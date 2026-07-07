//Best time to Buy and Sell Stock
//eg: prices={7,1,5,3,6,4}, return max profit
//leetcode ques 121
#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int> prices)
{
    int maxPro=0;
    int bestBuy=prices[0];
    for(int i=1;i<prices.size();i++){
        if(bestBuy<prices[i]){
            maxPro=max(maxPro,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
    }//O(n)
    return maxPro;
}
int main(){
    vector<int> prices={7,1,5,3,6,4};
    cout<<"Maximum Profit:"<<maxProfit(prices);
    return 0;
}
//Time Complexity :O(n)