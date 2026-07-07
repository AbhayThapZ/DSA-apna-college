#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    cout<<*(vec.begin())<<endl;
    cout<<*(vec.end())<<endl;

    vector<int>::iterator it;//forward
    //auto can be use instead of previous line
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    
    vector<int>::reverse_iterator it2;//backward
    //auto can be use instead of previous line
    for(it2=vec.rbegin();it2!=vec.rend();it2++){
        cout<<*(it2)<<" ";
    }
    cout<<endl;

    return 0;
}