class Solution {
public:
    void dfs(int n,vector<int>& vis,int i,vector<vector<int>> &adj)
    {
        if(i>=n) return;
        vis[i]=1;
        for(auto x : adj[i])
        {
            if(!vis[x])
            {
            dfs(n,vis,x,adj);
            }
        }
        return;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n-1>connections.size())
        {
            return -1;
        }
        vector<int> vis(n,0);
        vector<vector<int>> adj(n);
        for(auto con : connections)
        {
            adj[con[0]].push_back(con[1]);
            adj[con[1]].push_back(con[0]);
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(n,vis,i,adj); c++;
            }
        }
        return c-1;
    }
};
