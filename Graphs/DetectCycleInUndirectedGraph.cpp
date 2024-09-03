class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool check(vector<bool>& vis, vector<int> adj[], int parent){
        vis[parent]=1;
        
        queue<pair<int,int>>q;
        q.push({parent,-1});
        
        while (!q.empty()){
            int node=q.front().first;
            int src=q.front().second;
            q.pop();
            
            for (auto i: adj[node]){
                if (!vis[i]){
                    vis[i]=1;
                    q.push({i,node});
                }
                else if (i!=src){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool>vis(V,false);
        
        for (int parent=0; parent<V; parent++){
            
            if (!vis[parent]){
                if (check(vis,adj,parent)){
                    return true;
                }
            }
        }
        return false;
    }
};
