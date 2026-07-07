#include<iostream>
using namespace std;
//can skip row number but never the col number
pair<int ,int> linearSearch(int matrix[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(key==matrix[i][j]){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main(){
    int matrix[3][3]={{2,4,8},{1,3,6},{9,5,7}};
    int key=3;
    int rows=3;
    int cols=3;
    pair<int,int>ans=linearSearch(matrix,rows,cols,key);
    if(ans.first!=-1){
        cout<<"Key Found at row:"<<ans.first<<" and column:"<<ans.second<<endl;
    }else{
        cout<<"Key not found..."<<endl;
    }
    return 0;
}