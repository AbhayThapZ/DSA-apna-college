//previous question using two pointer approach
//this approach is majorly used in tracking two variable together
//this approach is majorly used to convert o(n^2) to O(n)
#include <iostream>
#include <vector>
using namespace std;
int mf(vector<int> height){
    int maxWater=0;
    int left=0;
    int right=height.size()-1;
    while(left<right){//O(n)
        int cur_cap=0;
        int wT=right-left;
        int hT=min(height[left],height[right]);
        cur_cap=wT*hT;
        maxWater=max(maxWater,cur_cap);
        height[left]<height[right]?left++:right--;//ternary statement
        //change the boundary which is smaller
        // if(height[left]<height[right]){
        //     left++;
        // }else if(height[left]>height[right]){
        //     right--;
        // }
    }
    return maxWater;
}
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<"Maximum Water:"<<mf(height)<<endl;
    return 0;
}//Time Complexity:O(n)