//Floyd's Triangle Pattern
/*
eg:
1
2 3
4 5 6
7 8 9 10
*/
#include <iostream>
using namespace std;
int main(){
    int n=4;
    int num=1;
    for (int i=0;i<n;i++){
        for (int j=1;j<i+1;j++){ // same for backward (int j=i+1;j>0;j--) cause number of running itertaion of loop is same
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}
//Time Complexity:O(n^2)
/*
for character
//Floyd's Triangle Pattern
eg:
1
2 3
4 5 6
7 8 9 10
#include <iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for (int i=0;i<n;i++){
        for (int j=1;j<i+1;i++){ // same for backward (int j=i+1;j>0;j--) cause number of running itertaion of loop is same
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
*/