//Linear Search in vector
#include <iostream>
#include <vector>
using namespace std;

bool Linear_Search(vector<int> vec,int target){
    bool found=false;//-1 shows invalid index
    for (int val:vec){
        if(target==val){
            found=true;
        }
    }
    return found;//or return -1;
}
int main(){
    vector<int> vec={0,1,2,3,4,5,6,7}; 
    int target=2;
    if(!Linear_Search(vec,target))
        cout<<"Not Found!!!"<<endl;
    else
        cout<<"Found!!!"<<endl;
    return 0;
}
