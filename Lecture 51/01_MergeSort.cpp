#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& arr,int st,int mid, int ed){//O(n)
    vector<int> temp;
    int i=st;
    int j=mid+1;
    while(i<=mid && j<=ed){
        if(arr[i]<=arr[j]){
        // if(arr[i]>=arr[j]){ for decending order
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    //for remaining left values
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    //for remaining right values
    while(j<=mid){
        temp.push_back(arr[j]);
        j++;
    }
    //Assignment of temp values into arr specific position
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st] =temp[idx];
    }

}
void mergeSort(vector<int>& arr ,int st,int ed){
    if(st<ed){
        int mid=st+(ed-st)/2;
        //left
        mergeSort(arr,st,mid);
        //right
        mergeSort(arr,mid+1,ed);
        merge(arr,st,mid,ed);
    }
}
int main(){
    vector<int> arr={12,31,35,8,32,17};
    mergeSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}