class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int> q;
        vector<int> ans;
        vector<bool> vis(V, false);
        
        q.push(0);
        vis[0] = true;
        
        while (!q.empty()) {
            int t = q.front();
            q.pop();
            ans.push_back(t);
            
            for (int i = 0; i < adj[t].size(); i++) {
                if (!vis[adj[t][i]]) {
                    q.push(adj[t][i]);
                    vis[adj[t][i]] = true;
                }
            }
        }
        
        return ans;
    }
};
