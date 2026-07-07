//inverted triangle pattern
/*
eg:
1111
 222
  33
   4
*/
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){//for printing spaces
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){//for printing elements
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}
//Time Complexity:O(n^2)
/*
for character version
#include <iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){//for printing spaces
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){//for printing elements
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}
*/