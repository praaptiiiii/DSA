class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image.empty()){
            return image;
        }

        int n=image.size();
        int m=image[0].size();

        queue<pair<int,int>>q;

        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        
        int pixel=image[sr][sc];
        
        if (pixel == color) {
            return image;
        }

        image[sr][sc]=color;        
        q.push({sr,sc});

        while (!q.empty()){
            int s=q.size();

            while (s--){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();

                for (int i=0; i<4; i++){
                    int nx=x+dx[i];
                    int ny=y+dy[i];

                    if (nx<0 || ny<0 || nx>=n || ny>=m || image[nx][ny]!=pixel){
                        continue;
                    }
                    image[nx][ny]=color;
                    q.push({nx,ny});
                }
            }
        }
        return image;
    }
};
