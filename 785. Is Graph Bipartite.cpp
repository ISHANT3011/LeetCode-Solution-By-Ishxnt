class Solution {
public:
    int dfs(vector<vector<int>> g,vector<int>&vis,int c,int ind)
    {
        vis[ind]=c;
        for(auto x : g[ind])
        {
            if(vis[x] == c ){return 0;}
            if(vis[x]==-1 && dfs(g,vis,c^1,x)==0){return 0;} 
        }
        return 1;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n+1,-1);
        for(int i=0;i<n;i++)
        {if(vis[i]==-1){if(dfs(graph,vis,0,i)==0){return 0;}}}
        return 1;
    }
};