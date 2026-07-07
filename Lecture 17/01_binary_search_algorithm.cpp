//Binary Search Algorithm with iteration
//Time Complexity : O(logn)
//Space Complexity: O(1)
//always implemented on sorted array       
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr,int tar){
    int n=arr.size();
    int st=0;
    int end=n-1;
    while(st<=end){
        //we will not use mid=st+end/2 
        //for mid=(Int_Max+Int_Max)/2 gives overflow
        //we use mid this formula: mid=st+(end-st)/2;
        int mid=st+(end-st)/2;//this optimization is very very important for placements ,internship and interviews
        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
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

    cout<<"Result 1 at Index :"<<binarySearch(arr1,tar1)<<endl;
    
    vector<int> arr2={-1,0,2,5,9,12};//even
    //mid will be element 2 at index 2
    int tar2=0;
    
    cout<<"Result 2 at Index :"<<binarySearch(arr2,tar2)<<endl;

    return 0;
}
//used in aggressive cows , painter partitions , book allocation , search in a rotated sorted array , pivot findout etc