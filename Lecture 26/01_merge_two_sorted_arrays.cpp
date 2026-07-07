//Merge two Sorted Arrays
//eg: A=[1,2,3,0,0,0] m=3 B=[2,5,6] n=3
//Leetcode ques 88
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1,vector<int> nums2,int m,int n){
    int idx=m+n-1;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>=nums2[j]){
            nums1[idx--]=nums1[i--];
        }else{
            nums1[idx--]=nums2[j--];
        }
    }
    while(j>=0){
        nums1[idx--]=nums2[j--];
    }
    return ;
}

int main(){
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    int m=3;
    int n=3;
    merge(nums1,nums2,m,n);
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<endl;
    }
}
//Time Complexity =O(m+n)
//Space Complexity =O(1 )