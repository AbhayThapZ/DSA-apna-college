#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int partition(vector<int>& arr,int st,int ed){
    int idx=st-1;
    int pivot=arr[ed];
    for(int j=st;j<ed;j++){
        if(arr[j]<=pivot){
        // if(arr[j]>=pivot){ for decending
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[ed],arr[idx]);
    return idx;
}
void quickSort(vector<int>& arr,int st,int ed){
    if(st<ed){
        int pivIdx=partition(arr,st,ed);
        //left
        quickSort(arr,st,pivIdx-1);
        //right
        quickSort(arr,pivIdx+1,ed);
    }
}
int main(){
    vector<int> arr={5,2,6,4,1,3};
    quickSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}