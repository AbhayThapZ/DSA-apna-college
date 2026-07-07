//check whether a character is upper or lower case
#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter your charcter:";
    cin>>a;
    if(a>'a'&& a<'z'){//OR((int)a>97 && (int)a<123),((int)a>65 && (int)a<91),(a>'A' && a<'Z')
        cout<<"LowerCASE";
    }else{
        cout<<"UpperCASE";
    }
    return 0;
}