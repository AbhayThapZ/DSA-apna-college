#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//custom comparitor

int main(){
    int arr[5]={3,5,1,8,2};
    sort(arr,arr+5);
    for(auto val:arr){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int> vec={3,5,1,8,2};
    sort(vec.begin(),vec.end());
    // sort(vec.begin(),vec.end(),greater<int>()); using functor we can sort in reverse order
    for(auto val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}