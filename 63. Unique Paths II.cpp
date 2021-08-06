class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        int n = og.size();
        int m = og[0].size();
        if(og[0][0]==1)
        {
            return 0;
        }
        if(n==1 && m==1 && og[0][0]==1)
        {
            return 0;
        }
        else if(n==1 && m==1 )
        {
            return 1;
        }
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,INT_MIN));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(og[i][j]==1)
                {
                    og[i][j]=INT_MIN;
                }
            }
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(og[i][0]!=INT_MIN && flag==0)
            {
                vis[i][0]=1;
            }
            else
            {
                vis[i][0]=-1;
                flag=1;
            }
        }
        flag=0; 
        for(int i=0;i<m;i++)
        {
            if(og[0][i]!=INT_MIN && flag==0)
            {
                vis[0][i]=1;
            }
            else
            {
                vis[0][i]=-1;
                flag=1;
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(og[i][j]==INT_MIN)
                {
                    vis[i][j]=-1;
                }
                
            }
        }
        vis[0][0]=0;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(vis[i][j]!=-1)
                {
                    int x=0,y=0;
                    if(vis[i-1][j]!=-1)
                    {
                        x=vis[i-1][j];
                    }
                    if(vis[i][j-1]!=-1)
                    {
                        y=vis[i][j-1];
                    }
                    vis[i][j] = x+y;
                }
            }
        }

        return vis[n-1][m-1]==-1?0:vis[n-1][m-1];
    }
};