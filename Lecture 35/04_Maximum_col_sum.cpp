#include <iostream>
#include <climits>
using namespace std;

int maxRowSum(int matrix[][3],int rows,int cols){
    int maxCS=INT_MIN;
    for(int i=0;i<cols;i++){
        int colSumI=0;
        for(int j=0;j<rows;j++){
            colSumI+=matrix[j][i];
        }
        maxCS=max(colSumI,maxCS);
    }
    return maxCS;
}

int main(){
    int matrix[3][3]={{2,4,8},{1,3,6},{5,7,9}};
    int cols=3;
    int rows=3;
    cout<<maxRowSum(matrix,rows,cols);
    return 0;
}