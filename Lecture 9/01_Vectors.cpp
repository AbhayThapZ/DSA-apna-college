//almost array like
//have index like array
//they are just dynamic in sizing ,not like array which are static in size
//STL (Standard Template Library) contails datastructures implementations
//first STL container

#include <iostream>
#include <vector>//contains stl container name vector 
//#include <bits/c++.h> did'nt recomended to use this
//can give namespace conflicts and contains unnecessary things which are not required

using namespace std;
int main(){
    vector<int> vec0;//size currently is 0;
    
    vector<int> vec1(5,0);//5 is size and 0 is element in all the index
    cout<<vec1[0]<<endl;
    cout<<vec1[1]<<endl;
    cout<<vec1[2]<<endl;
    cout<<vec1[3]<<endl;
    cout<<vec1[4]<<endl;

    vector<int> vec2={1,2,3};//size 3
    cout<<vec2[0];
    return 0;
}
//in terminal -std=c++11 , used to write in terminal for telling that we are using c++ 11th standard