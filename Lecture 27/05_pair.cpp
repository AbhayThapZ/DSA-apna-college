#include <iostream>
#include <vector>
using namespace std;

int main(){
    pair<string,int> p1={"Janu",5};
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    cout<<endl;
    
    //Pair of Pair
    pair<int,pair<int,char>> p2={7,{67,'o'}};
    cout<<p2.first<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl;
    cout<<endl;

    //Vector of Pair
    vector<pair<int,int>> vec={{1,2},{2,3},{3,4}};
    vec.push_back({4,5});//only insert
    vec.emplace_back(4,5);//in-place objects created, its faster as well
    for(pair<int,int>/*"auto" can also be used here*/ p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}