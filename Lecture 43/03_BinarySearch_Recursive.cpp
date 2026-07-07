#include <iostream>
#include <array>
using namespace std;

int BSRecursive(int arr[],int tar,int st,int ed){
    int mid=st+(ed-st)/2;
    if(st<=ed){
        if(arr[mid]==tar) return mid;
        else if(tar>arr[mid]){
            return BSRecursive(arr,tar,mid+1,ed);
        }else{
            return BSRecursive(arr,tar,st,mid-1);
        }
    }
    return -1;
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int tar=5;
    int st=0;
    int ed=6;
    cout<<"Element at index:"<<BSRecursive(arr,tar,st,ed);

    return 0;
}