//Majority Element: element whose frequency is more than floor n by two times
//brute force method :find the frequency of all the elements
#include <iostream>
#include <vector>
using namespace std;

int majority_Elements(vector<int> nums){
    int n=nums.size();
    for(int val:nums){
        int freq=0;
        for(int ele:nums){
            if(ele==val){
                freq++;
            }
        }
        if(freq>(n/2)){
            return val;
        }
    }
    return -1;
}

int main(){
    vector<int> nums={2,2,1,2,1};
    int freq=majority_Elements(nums);
    cout<<"Majority Element:"<<freq<<endl;
    return 0;
}
//Time Complexity:O(n^2)