#include<iostream>
#include<string>
#include<vector>
using namespace std;

int str_com(vector<char>& chars){
    int n=chars.size();
    int idx=0;
    for(int i=0;i<n;i++){
        int count=0;
        char ch=chars[i];
        while(i<n && chars[i]==ch){
            count++;
            i++;
        }
        if(count==1){
            chars[idx++]=ch;
        }else{
            chars[idx++]=ch;
            string str=to_string(count);
            for(char c:str){
                chars[idx++]=c;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}

int main(){
    vector<char> chars={'a','b','b','b','c','c'};
    cout<<str_com(chars)<<endl;
    return 0;
}