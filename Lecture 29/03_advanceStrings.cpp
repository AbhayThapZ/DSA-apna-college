//strings are basically the advance level of strings
#include <iostream>
#include <string>//optional
using namespace std;
int main(){
    string str="apna college";//contiguous in nature
    cout<<str<<endl;
    //dynamic in nature
    str="helloo";
    cout<<str<<endl;
    //character arrays can't do this...they can't change the value at runtime

    string str1="helloeeee ",str2="Januuuu ji";
    string str3=str1+str2;//concatination
    cout<<str3<<endl;

    str1="Jannu";
    str2="Gracy";
    cout<<(str1==str2)<<endl;
    cout<<(str1<str2)<<endl;
    cout<<(str1>str2)<<endl;
    //lexicographically ordered

    cout<<str1.length()<<endl;
    // cin>>str; does same blankspace problem as in character arrays
    getline(cin,str);
    cout<<str<<endl;

    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for(char val:str){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}