#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//custom comparitor
bool comparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second)return true;
    if(p1.second>p2.second)return false;
    if(p1.first<p2.first) return true;
    else return false;
}
int main(){
    vector<pair<int,int>> vec={{3,1},{2,1},{5,4},{6,2},{7,3}};
    sort(vec.begin(),vec.end(),comparator);
    for(auto val:vec){
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}