#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//custom comparitor

int main(){
    vector<int> vec={1,2,3,4,5};
    cout<<*(max_element(vec.begin(),vec.end()))<<endl;
    cout<<*(min_element(vec.begin(),vec.end()))<<endl;
    return 0;
}