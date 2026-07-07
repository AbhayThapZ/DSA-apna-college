#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;//0

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    vec.pop_back();

    cout<<"Value at index 2:"<<vec[2]<<endl;
    cout<<"Value at index 2:"<<vec.at(2)<<endl;

    cout<<"Front Element :"<<vec.front()<<endl;
    cout<<"Back Element :"<<vec.back()<<endl;

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    for(int val:vec){
        cout<<val<<endl;
    }

    vec.erase(vec.begin()+4);//we cant use index here ,instead we use iterator
    vec.erase(vec.begin()+1,vec.begin()+3);//[start,end)
    vec.insert(vec.begin()+2,100);//(pos,elem)
    vec.clear();//empty the whole vector
    cout<<vec.empty();//check whether the vector is empty or not

    vector<int> vec2(10,-1);//10 is size and -1 are initial values
    vector<int> vec3(vec2);//initialized with vec2 values
    return 0;
}