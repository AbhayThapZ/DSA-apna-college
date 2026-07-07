#include <iostream>
#include <vector>
using namespace std;

void getPermute(string& s,vector<vector<string>>& ans,int idx){
    if(idx==s.length()){
        ans.push_back({s});
        return;
    }
    for(int i=idx;i<s.length();i++){
        swap(s[idx],s[i]);
        getPermute(s,ans,idx+1);
        swap(s[idx],s[i]);
    }
}

vector<vector<string>> premute(string& s){
    vector<vector<string>> ans;
    getPermute(s,ans,0);
    return ans;
}

int main(){
    string s="abc";
    vector<vector<string>> ans=premute(s);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}