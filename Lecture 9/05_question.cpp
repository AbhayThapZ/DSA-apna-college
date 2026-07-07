//Leetcode problem 136: Single Number, use bitwise XOR
#include <iostream>
#include <vector>
using namespace std;
// class Solution{
//     public:
    int singleNumber(vector<int>& nums){
        //& gives the vector pass by reference becoz generally vectors are internally pass by value in functions
        //& can be written after or before name
        //& creates an alias of original vector and then pass it to the function
        //constraints means limits
        int ans=0;
        for(int val: nums){
            ans^=val;
        }
        return ans;
    }
    int main(){
        vector<int> vec={4,2,1,2,1};
        cout<<"Single Number is:"<<singleNumber(vec)<<endl;
        return 0;
    }
// }
//leetcode,CodeForces,CodeChief,Hackerer