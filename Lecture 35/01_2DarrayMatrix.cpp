#include<iostream>
using namespace std;
int main(){
    // int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int matrix[4][3];
    int rows=4;
    int col=3;
    // matrix[3][2]=10;
    // cout<<matrix[3][2]<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}