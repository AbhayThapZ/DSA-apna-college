#include <iostream>
#include <climits>
using namespace std;

int maxRowSum(int matrix[][4],int n){
    int sum=0;
    //i=j
    for(int i=0;i<n;i++){//O(n)
        sum+=matrix[i][i];
        if(i!=n-i-1){
            sum+=matrix[i][n-1-i];
        }
    }
    return sum;
}
    // int PD=0;
    // int SD=0;
    // int sum=0;
    // if(n%2==0){
    //     for(int i=0;i<n;i++){//O(n*n)
    //         for(int j=0;j<n;j++){
    //             if(i==j){
    //                 PD+=matrix[i][j];
    //             }
    //             else if(j==(n-1)-i){
    //                 SD+=matrix[i][j];
    //             }
    //         }
    //     }
    //     sum=PD+SD;
    //     return sum;
    // }

int main(){
    int matrix[4][4]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int n=4;
    cout<<maxRowSum(matrix,n);
    return 0;
}