#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main(){
    map<string,int> m;
    m["tv"]=100;
    m["tv"]=50;//updation not creating a new key
    m["laptop"]=100;
    m["headphones"]=80;
    m["tablets"]=120;
    m["watch"]=20;

    m.insert({"Camera",25});
    m.emplace("Nnananananan",25);
    m.erase("tv");
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m.count("laptop")<<endl;//return the number of instances 
    cout<<m["laptop"]<<endl;//gives the value stored with the key

    if(m.find("Camera")!=m.end()) cout<<"Found\n";
    else cout<<"Not Found\n";
    //O(log n) self balancing tree

    multimap<string,int> m2;
    m2.emplace("tv",100);
    m2.emplace("tv",100);
    m2.emplace("tv",100);
    m2.emplace("tv",100);
    //can add same key multiple times
    m2.erase(m2.find("tv"));
    // m2.erase("tv"); = will delete all the tv
    for(auto p:m2){
        cout<<p.first<<" "<<p.second<<endl;
    }
    //lexicographical printing or sorting in ascending

    unordered_map<string,int> m3;
    m3.emplace("tv",80);
    m3.emplace("fridge",50);
    m3.emplace("watch",10);
    m3.emplace("cola",12);
    for(auto p:m3){
        cout<<p.first<<" "<<p.second<<endl;
    }
    //O(1) sometimes O  +(n) as well
    return 0;
} 