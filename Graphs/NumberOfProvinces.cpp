class Solution {
public:
    void dfs(int index, vector<bool>& vis, vector<vector<int>>& adj) {
        vis[index] = true;
        
        for (int i = 0; i < adj[index - 1].size(); i++) {
            if (adj[index - 1][i] == 1 && !vis[i + 1]) {
                dfs(i + 1, vis, adj);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& adj) {
        vector<bool> vis(adj.size() + 1, false);
        int count = 0;
        
        for (int index = 1; index <= adj.size(); index++) {
            if (!vis[index]) {
                dfs(index, vis, adj);
                count++;
            }
        }
        
        return count;
    }
};
