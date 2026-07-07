#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//custom comparitor

int main(){
    vector<int> vec={1,2,3,4,5};
    cout<<binary_search(vec.begin(),vec.end(),4)<<endl;
    cout<<binary_search(vec.begin(),vec.end(),410)<<endl;
    return 0;
}