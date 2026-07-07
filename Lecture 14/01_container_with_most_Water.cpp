//Leetcode 11
//container with most water: eg, height:[1,8,6,2,5,4,8,3,7]...return max amount of water container can store
//brute force approach
#include <iostream>
#include <vector>
using namespace std;
int mf(vector<int> height){
    int maxWater=0;
    for(int i=0;i<height.size();i++){//O(n)
        for(int j=i+1;j<height.size();j++){//O(n)
            int con_cap=0;
            int wT=j-i;//distance between the left and right bound
            int hT=min(height[i],height[j]);//bigger height betweeen left and right bound
            int con_cap=wT*hT;//current container capacity
            maxWater=max(maxWater,con_cap);
        }
    }
    return maxWater;
}
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<"Maximum Water:"<<mf(height)<<endl;
    return 0;
}//O(n^2)