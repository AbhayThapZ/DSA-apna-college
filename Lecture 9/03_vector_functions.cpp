#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> vec={'a','b','c','d','e'};//for empty vector size is 0 and the for each loop will not run
    cout<<"Size = "<<vec.size()<<endl;//size function gives the size of the vector

    vec.push_back('f');//pushes element at last
    vec.push_back('g');
    vec.push_back('h');
    cout<<"Size = "<<vec.size()<<endl;
    for(char val:vec){//for each loop used in STL containers
        cout<<val<<" ";
    }

    cout<<endl;
    vec.pop_back();//pop last element
    cout<<"Size = "<<vec.size()<<endl;
    for(char val:vec){//for each loop used in STL containers
        
        cout<<val<<" ";
    }

    cout<<endl;
    cout<<vec.front()<<endl;//prints first value
    cout<<vec.back()<<endl;//prints last value
    cout<<vec.at(2)<<endl;//gives the value at spectific index
    return 0;
}
//there are other functions as well but they are for iterators which is not ralavent  right now