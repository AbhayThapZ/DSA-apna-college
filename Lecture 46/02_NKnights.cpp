#include<iostream>
#include<vector>
using namespace std;
bool isSafe(vector<string>& board, int row, int col, int n) {
    int x[]={-2,-2,-1,-1,1,1,2,2};
    int y[]={-1,1,-2,2,-2,2,-1,1};
    for(int i=0;i<8;i++){
        int newRow=row+x[i];
        int newCol=col+y[i];
        if(newRow>=0 && newRow<n && newCol>=0 && newCol<n){
            if(board[newRow][newCol]=='K') return false;
        }
    }
    return true;
}

void nKnights(vector<string>& board,int row ,int n,vector<vector<string>>& ans){
    if(row==n){
        ans.push_back({board});
        return;
    }
    for(int col=0; col<n;col++){
        if(isSafe(board,row,col,n)){
            board[row][col]='K';
            nKnights(board,row+1,n,ans);
            board[row][col]='.';
        }
    }
}
vector<vector<string>> solveNKnights(int n) {
    vector<string>board(n,string(n,'.'));
    vector<vector<string>> ans;
    nKnights(board,0,n,ans);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<string>> ans=solveNKnights(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
    }    
}