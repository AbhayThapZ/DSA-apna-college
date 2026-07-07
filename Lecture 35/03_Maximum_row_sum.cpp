#include <iostream>
#include <climits>
using namespace std;

int maxRowSum(int matrix[][3],int rows,int cols){
    int maxRS=INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSumI=0;
        for(int j=0;j<cols;j++){
            rowSumI+=matrix[i][j];
        }
        maxRS=max(rowSumI,maxRS);
    }
    return maxRS;
}

int main(){
    int matrix[3][3]={{2,4,8},{1,3,6},{9,5,7}};
    int cols=3;
    int rows=3;
    cout<<maxRowSum(matrix,rows,cols);
    return 0;
}