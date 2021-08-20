class Solution {
public:
    int uniquePaths(int n, int m) {
        if(n==1 && m==1)
        {
            return 1;
        }
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0)
                {
                    vis[i][j]=1;
                }
            }
        }
        vis[0][0]=0;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                vis[i][j] = vis[i-1][j] + vis[i][j-1];
            }
        }
        return vis[n-1][m-1];
    }
};