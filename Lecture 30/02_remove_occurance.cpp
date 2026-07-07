#include<iostream>
#include <string>
using namespace std;
string removeOccurrences(string& s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
}
int main(){
    string s = "daabcbaabcbc", part = "abc";
    cout<<"Before:"<<s<<endl;
    removeOccurrences(s,part);
    cout<<"After:"<<s;
}