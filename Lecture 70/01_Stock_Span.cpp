#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution{
public:
    vector<int> stock_span(vector<int>& price){
        stack <int> s;
        vector<int> ans(price.size(),0);
        for(int i=0;i<price.size();i++){
            while(s.size()>0 && price[s.top()]<=price[i]){
                s.pop();
            }
            if(s.size()==0){
                ans[i]=i+1;//curr idx+1
            }else{
                ans[i]=i-s.top();//curr idx-prevHigh
            }
            s.push(i);
        }
        return ans;
    }

};

int main(){
    vector<int> price={100,80,60,70,60,75,85};
    Solution s;
    vector <int> ans=s.stock_span(price);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}