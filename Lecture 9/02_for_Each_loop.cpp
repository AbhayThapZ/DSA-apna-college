#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> vec={'a','b','c','d','e'};
    for(char val:vec){//for each loop used in STL containers
        cout<<val<<endl;//gives the element at that index not only the index
    }
    //revision loop of array for comparison and understanding
    // int arr[]={1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<endl;
    // }
    return 0;
}