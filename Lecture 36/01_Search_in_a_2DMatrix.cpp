#include <iostream>
#include <vector>
using namespace std;
//o(log(n*m))
bool searchInARow(vector<vector<int>>& matrix,int target,int midR){
    int n=matrix[0].size();
    int st=0,ed=n-1;
    while(st<=ed){//O(log n)
        int mid=st+(ed-st)/2;
        if(target==matrix[midR][mid]){
            return true;
        }else if(target>matrix[midR][mid]){
            st=mid+1;
        }else{
            ed=mid-1;
        }
    }
    return false;
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //BS on all rows
    int m=matrix.size();
    int n=matrix[0].size();
    int sR=0,eR=m-1;
    while(sR<=eR){//O(log m)
        int midR=sR+(eR-sR)/2;
        if(target>=matrix[midR][0] && target<=matrix[midR][n-1]){
            return searchInARow(matrix,target,midR);
        }else if(target>matrix[midR][n-1]){
            sR=midR+1;
        }else{
            eR=midR-1;
        }
    }
    return 0;
}

int main(){
    vector<vector<int>> matrix={{1,2,3,7},{10,11,16,20},{23,30,34,60}};
    int target=34;
    if(searchMatrix(matrix,target)){
        cout<<target<<" exists"<<endl;
    }else{
        cout<<target<<" does not exists"<<endl;
    }
    return 0;
}