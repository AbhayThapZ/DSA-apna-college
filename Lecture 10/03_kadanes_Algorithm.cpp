//previous question but...
//using kadane's algorithm (more optimised)// Important for interview prespective
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size=7;
    int arr[]={3,-4,5,4,-1,7,-8};
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<size;i++){//uses end factor for all negative values
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"Maximum Subarray Sum :"<<maxSum;
    return 0;
}
//Linear Time Complexity i.e. O(n) ...hence most optimized