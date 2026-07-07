/*
Hollow Diamond Pattern
eg:
    *
  *   *
 *     *
*       *
 *     * 
  *   *
    *
solve horizontally , divide into two parts
*/
#include <iostream>
using namespace std;
int main(){
    int n=4;
    //top half
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){//for left spaces
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){//for inner spaces
            cout<<" ";
            }
        cout<<"*";
        }
        cout<<endl;
    }
    //Time Complexity:O(n^2)
    //bottom half
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
//Time Complexity:O(n^2)

//Time Complexity:O(n^2)+O(n^2)=O(n^2)