class Solution {
public:
    int flag = 0;
    void dfs(int i,int e,vector<vector<int>> &adj,vector<int> &vis)
    {
        if(flag)
        {
            return;
        }
        if(i==e)
        {
            flag =1;
            return;
        }
        if(vis[i]==1)
        {
            return;
        }
        vis[i]=1;
        for(auto x : adj[i])
        {
            dfs(x,e,adj,vis);
        }
        return;
    }
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> adj(n+1); 
        int m = edges.size();
        for(int i=0;i<m;i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n+1,0);
        dfs(start,end,adj,vis);
        if(flag){ return true;}
        return false;
    }
};