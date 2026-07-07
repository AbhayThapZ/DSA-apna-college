//using bruteforce method
//Leetcode Problem:53
#include <iostream>
#include <climits>
using namespace std; 

int main(){
    int size=5;
    int arr[5]={1,2,3,4,5};
    int maxSum=INT_MIN;
    for(int st=0;st<size;st++){//decides the starting point
        int currSum=0;
        for(int ed=st;ed<size;ed++){//start to end iteration
            currSum+=arr[ed];//carries the current sum which resets evertime after inner loop ends and outer loop runs
            maxSum=max(currSum,maxSum);//saves largest subarray sum
        }
    }
    cout<<"Maximum Subarray Sum="<<maxSum<<endl;
    return 0;
}
//Time Complexity =O(n^2)