#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m=matrix.size();
    int n=matrix[0].size();
    int srow=0,erow=m-1,scol=0,ecol=n-1;
    vector<int> ans;
    while(srow<=erow && scol<=ecol){
        //top
        for(int i=scol;i<=ecol;i++){
            ans.push_back(matrix[srow][i]);
        }
        //right
        for(int i=srow+1;i<=erow;i++){
            ans.push_back(matrix[i][ecol]);
        }
        //bottom
        for(int i=ecol-1;i>=scol;i--){
            if(srow==erow){break;}
            ans.push_back(matrix[erow][i]);
        }
        //left
        for(int i=erow-1;i>=srow+1;i--){
            if(scol==ecol){break;}
            ans.push_back(matrix[i][scol]);
        }
        srow++;
        erow--;
        scol++;
        ecol--;
    }
    return ans;
}
int main(){
    vector<vector<int>> matrix={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    vector<int> ans=spiralOrder(matrix);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}