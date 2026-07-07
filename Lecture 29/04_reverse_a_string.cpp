//for char array[]
#include <iostream>
#include <vector>
using namespace std;

void reverse_charArray(vector<char>& arr){
    int n=arr.size();
    int st=0;
    int end=n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
//time complexity O(n)
int main(){
    vector<char> arr={'h','e','l','l','o','\0'};//character arrays
    reverse_charArray(arr);
    for(char val:arr){
        cout<<val<<endl;
    }
    return 0;
}