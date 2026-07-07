//for string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//time complexity O(n)
int main(){
    string str="Hoooooooooolaaaaaaaaa";
    reverse(str.begin(),str.end());//iterators
    cout<<str<<endl;
    return 0;
}