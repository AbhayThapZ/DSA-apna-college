//Binary Search Algorithm with recursion
//Time Complexity : O(logn)
//Space Complexity: O(logn)
//always implemented on sorted array       
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(tar>arr[mid]){//2nd half
            return binarySearch(arr,tar,mid+1,end);
        }
        else if(tar<arr[mid]){//1st half
            return binarySearch(arr,tar,st,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};//odd
    //mid will be element 4 at index 3
    int tar1=12;

    cout<<"Result 1 at Index :"<<binarySearch(arr1,tar1,0,arr1.size())<<endl;
    
    vector<int> arr2={-1,0,2,5,9,12};//even
    //mid will be element 2 at index 2
    int tar2=0;
    
    cout<<"Result 2 at Index :"<<binarySearch(arr2,tar2,0,arr2.size())<<endl;

    return 0;
}
