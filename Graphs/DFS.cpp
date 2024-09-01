class Solution {
  public:
    void dfs(int node,vector<int>adj[], vector<int>& ans, vector<bool>& vis){
        vis[node]=true;
        ans.push_back(node);
        for (auto i: adj[node]){
            if (!vis[i]){
                dfs(i,adj,ans,vis);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<bool>vis(V,false);
        vector<int>ans;
        dfs(0,adj,ans,vis);
        return ans;
    }
};
