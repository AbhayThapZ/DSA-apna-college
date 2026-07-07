/*
pyramid pattern
eg:
   1
  121
 12321
1234321
horizontally no logic , but we can solve it vertically
divide it into left and right part
*/
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){//for spaces
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){//for left elements
            cout<<j;
        }
        for(int j=i;j>0;j--){//for right elements
            cout<<j;
        }
        cout<<endl;
    }
}
//Time Complexity:O(n^2)