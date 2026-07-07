//reverse triangle pattern
/*
eg:
1
21
321
4321
*/
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for (int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
//Time Complexity:O(n^2)
/*
for characters
#include <iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for (int i=0;i<n;i++){
        ch+=i+1;//++ch can also be used
        for(int j=i+1;j>0;j--){
            ch--;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}
*/