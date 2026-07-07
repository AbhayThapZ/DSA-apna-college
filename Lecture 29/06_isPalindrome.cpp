#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str){
    int st=0;
    int end=str.length()-1;
    while(st<=end){
        if(str[st]!=str[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string str="madam";
    cout<<isPalindrome(str)<<endl;
}
