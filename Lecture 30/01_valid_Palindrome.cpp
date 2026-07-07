#include <iostream>
#include <string>
using namespace std;
bool valid_Palindrome(string s){
    int st=0;int end=s.length()-1;
        while(st<end){
            if(!isalnum(s[st])){
                st++; 
                continue;
            } 
            if(!isalnum(s[end])){
                end--; 
                continue;
            } 
            if(tolower(s[st])!=tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }
        return true;
}
int main(){
    string str="racecar";
    cout<<valid_Palindrome(str);
    return 0;
}