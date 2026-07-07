//painters partition
//eg [10,10,10,10] N=4,M=2
//Approach :Binary Search
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int> nums,int n, int m, int maxAllowedTime){//O(n)
    int painters=1,time=0;
    for(int i=0;i<n;i++){
        if(time+nums[i]<=maxAllowedTime){
            time+=nums[i];
        }else{
            painters++;
            time=nums[i];
        }
    }
    return painters<=m?true:false;
}

int painterPar(vector<int> nums,int n,int m){
    if (m>n) return -1;
    int sum=0,maxVal=INT_MIN;
    for(int i=0;i<nums.size();i++){//O(n)
        sum+=nums[i];
        maxVal=max(maxVal,nums[i]);
    }
    int st=maxVal,end=sum;
    int ans=-1;
    while (st<=end){//log(sum OR range)
        int mid=st+(end-st)/2;
        if(isPossible(nums,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums={40,30,10,20};
    int n=4,m=2;
    cout<<"Minimum Time Taken :"<<painterPar(nums,n,m);
    return 0;
} 
//Time Complexity:O(log(sum)*N)