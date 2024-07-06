#include <iostream>
#include<vector>
#include<string>
using namespace std;

void path(int row, int col, string ans, int n, vector<string>&list, vector<vector<int>>&visited,int shiftrow[],int shiftcol[], vector<vector<int>>&board){
    if (row==n-1 && col==n-1){
        list.push_back(ans);
        return;
    }
    string order="DLRU";
    for (int index=0; index<4; index++){
        int nextrow=row+shiftrow[index];
        int nextcol=col+shiftcol[index];
        if (nextrow<n && nextcol<n && nextrow>=0 && nextcol>=0 && visited[nextrow][nextcol]==0 && board[nextrow][nextcol]==1){
            visited[nextrow][nextcol]=1;
            path(nextrow,nextcol,ans+order[index],n,list,visited,shiftrow,shiftcol,board);
            visited[nextrow][nextcol]=0;
        }
        
    }
    
}

int main()
{
    vector<string>list;
    int n=4;
    vector<vector<int>>visited(n,vector<int>(n,0));
    int shiftrow[]={1,0,0,-1};
    int shiftcol[]={0,-1,1,0};
    vector<vector<int>>board={{1, 0, 0, 0},{1, 1, 0, 1},{1, 1, 0, 0},{0, 1, 1, 1}};
    if (board[0][0]==1){
        visited[0][0]=1;
        path(0,0,"",n,list,visited,shiftrow,shiftcol,board);
    }
    for (auto i:list){
        cout<<i<<endl;
    }
    return 0;
}
