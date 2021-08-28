class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> adj_inside(n+1,0);
        vector<int> adj_outside(n+1,0);
        int m = trust.size();
        for(int i=0;i<m;i++)
        {
            adj_inside[trust[i][1]]++;
            adj_outside[trust[i][0]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(adj_inside[i]==n-1 && adj_outside[i]==0)
            {
                return i;
            }
        }
        return -1;
        
    }
};