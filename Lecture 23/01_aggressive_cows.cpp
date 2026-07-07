//aggressive cows problem
//eg: arr=[1,2,8,4,9] n=5 c=3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& nums,int n,int c,int minAllowedDistance){//O(n)
    int cow=1,lastStallPos=nums[0];
    
    for (int i=1;i<n;i++){
        if(nums[i]-lastStallPos>=minAllowedDistance){
            cow++;
            lastStallPos=nums[i];
        }if(cow==c){
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int>& nums,int n,int c){ 
    sort(nums.begin(),nums.end());
    int st=1;
    int end=nums[n-1]-nums[0];
    int ans=-1;
    while(st<=end){//O(log(range))
        int mid=st+(end-st)/2;
        if(isPossible(nums,n,c,mid)){//right
            ans=mid;
            st=mid+1;
        }else{//left
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,8,4,9};
    int n=5;
    int c=3;
    cout<<"Minimum Distance is: "<<aggressiveCows(nums,n,c);
    return 0;
}
//time complexity:
//1.if range is >n O(log(range)*n)
//1.if n is >range O(nlogn)