class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if (grid.empty()){
            return 0;
        }

        int n=grid.size(); int m=grid[0].size();
        int count=0; int total=0; int mins=0;
        queue<pair<int,int>>rotten;

        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j]!=0){
                    total++;
                }
                if (grid[i][j]==2){
                    rotten.push({i,j});
                }
            }
        }

        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};

        while (!rotten.empty()){
            int s=rotten.size();
            count+=s;
            
            while (s--){
                int x=rotten.front().first;
                int y=rotten.front().second;
                rotten.pop();

                for (int i=0; i<4; i++){
                    int nx=dx[i]+x;
                    int ny=dy[i]+y;

                    if (nx<0 || ny<0 || nx>=n || ny>=m || grid[nx][ny]!=1){
                        continue;
                    }
                    grid[nx][ny]=2;
                    rotten.push({nx,ny});
                }
            }
            if (!rotten.empty()){
                mins++;
            }
        }

        if (count==total){
            return mins;
        }

        return -1;
    }
};
