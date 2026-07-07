//Majority Element: element whose frequency is more than floor n by two times
//using inbuild Sorting function : takes O(nlogn)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int majority_Elements(vector<int> nums){

    int n=nums.size();

    //sorting:O(nlogn)
    sort(nums.begin(),nums.end());
    
    //frequency count
    int freq=1;
    int ans=nums[0];
    for(int i=1;i<n;i++){//O(n)
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans=nums[i];
        }
        
        if(freq>(n/2)){
        return ans;
    }
    }
}
/*more simplified code for previous function
    sort(nums.begin(),nums.end());
    ans=nums[(nums.size())/2]
    just print the middle element

*/
int main(){
    vector<int> nums={2,2,1,2,1};
    int freq=majority_Elements(nums);
    cout<<"Majority Element:"<<freq<<endl;
    return 0;
}
//Overall Time Complexity:O(nlogn)