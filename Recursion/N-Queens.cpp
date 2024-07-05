#include <iostream>
#include<vector>
using namespace std;

void solve(vector<string> &board, vector<vector<string>> &ans, vector<int> &left, vector<int> &up, vector<int> &down, int col, int n){
    if (col ==n){
        ans.push_back(board);
        return;
    }
    for (int row=0; row<n; row++){
        if (left[row]==0 && up[row+col]==0 && down[n-1 + col - row]==0){
            board[row][col]='Q';
            left[row]=1;
            up[row+col]=1;
            down[n-1+col-row]=1;
            solve(board,ans,left,up,down,col+1,n);
            left[row]=0;
            up[row+col]=0;
            down[n-1+col-row]=0;
            board[row][col]='.';
        }
    }
}

int main()
{
    int n=4;
    vector<string> board(n,string(n,'.'));
    vector<vector<string>> ans; 
    vector<int> left(n,0); 
    vector<int> up(2*n-1,0); 
    vector<int> down(2*n-1,0);
    solve(board,ans,left,up,down,0,n);
    for (auto i: ans){
        for (auto j: i){
            for (auto k: j){
                cout<<" "<<k<<" ";
            }
            cout<<endl;
        }
        cout<<"------------------------------------------------------"<<endl;
    }
    return 0;
}
