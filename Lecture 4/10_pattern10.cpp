/*
Butterfly Pattern
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
divide it into both horizontal and vertical part 
Follow:Print->Spaces->Print
*/
 
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i-1);j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(i);j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//Time Complexity:O(n^2)+O(n^2)=O(n^2)