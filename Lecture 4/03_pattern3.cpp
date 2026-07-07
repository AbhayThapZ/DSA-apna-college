//triangle pattern
/*
eg:
*
**
***
*/
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){//for number of lines
        for(int j=0;j<i+1;j++){//number of stars is equal to number of lines
            cout<<"*";
        }
        cout<<endl;//next line
    }
}
//Time Complexity:O(n^2)
/*
eg:
1
22
333
4444
#include <iostream>
using namespace std;
int main(){
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num;
        }
        num++;
        cout<<endl;//next line
    }
}
    OR
eg:
1
22
333
4444
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
        cout<<endl;//next line
    }
}
for character
#include <iostream>
using namespace std;
int main(){
    int n=5 ;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;//next line
    }
}
*/