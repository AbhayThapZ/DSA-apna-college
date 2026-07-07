//Reverse code in vector, use & for pass by reference
#include <iostream>
#include <vector>
using namespace std;
//we will use 2 pointer approach here
void reverse_Of_Array(vector<int>& vec){
    int start=0;
    int end=vec.size()-1;//7 position 
    //start++ and last-- in every iteration...
    while(start<end){// for both odd and even array
        //odd arraymid variable will not get swapped
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    return;
}
int main(){
    vector<int> vec={4,2,7,8,1,2,5};
    reverse_Of_Array(vec);
    for(int value:vec){
        cout<<value<<" ";
    }
    return 0;
}
//Time Complixity:O(n)