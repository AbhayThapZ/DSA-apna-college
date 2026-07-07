//are also called cstrings
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str1[]={'a','b','c','\0'};//character arrays
    //starting ascii value is associated with null value

    int arr[]={1,2,3,4};
    cout<<arr<<endl;
    
    cout<<str1<<endl;//constant pointer
    cout<<strlen(str1)<<endl;//i.e. 3

    char str2[]="helo";//string literals...str1 is not a string literal
    cout<<strlen(str1)<<endl;//i.e. 4
    cout<<str2[3]<<endl;//"o"

    //input and output
    char str3[12];
    cout<<"Enter character array:"<<endl;
    cin.getline(str3,12,'$');
    //full syntax: cin.getline(str,len,delimiter)
    cout<<"output:"<<str3<<endl;
    //if you enter "hello world" with space it will only take hello as an input and delete the world or the part after the space 
    //use cin.getline to counter it 

    //for giving output of every individual character in the string
    for(char ch:str3){
        cout<<ch<<" ";
    }

    return 0;
}