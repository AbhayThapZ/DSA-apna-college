#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;
    
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    

    cout<<"Size is:"<<vec.size()<<endl;//3
    cout<<"Capacity is:"<<vec.capacity()<<endl;//4
    
    vec.push_back(3);
    vec.push_back(4);
    
    cout<<"Size is:"<<vec.size()<<endl;//5
    cout<<"Capacity is:"<<vec.capacity()<<endl;//8

    return 0;
}
//internally vectors are array