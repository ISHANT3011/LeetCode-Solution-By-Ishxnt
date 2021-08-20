#include<bits/stdc++.h>
using namespace std;
int ans = INT_MIN;
void dfs(vector<vector<int>> M,int i,int j,int rol,int col,int val,int pval,int curr)
{
    if(i<0 || i>=rol || j<0 || j>=col || val<pval)
    {
        return;
    }
    curr += val;
    if(curr>ans)
    {
        ans = curr;
    }
    if(i-1>=0)
    {dfs(M,i-1,j,rol,col,M[i-1][j],val,curr);}
    if(j-1>=0)
    {
    dfs(M,i,j-1,rol,col,M[i][j-1],val,curr);
    }
    if(i+1<rol)
    {
    dfs(M,i+1,j,rol,col,M[i+1][j],val,curr);
    }
    if(j+1<col)
    {
    dfs(M,i,j+1,rol,col,M[i][j+1],val,curr);
    }
    return;
}

int coinSweeper(vector<vector<int>> M)
{
    
    int rol = M.size();
    int col = M[0].size();
    int curr  =0;
    for(int i=0;i<rol;i++)
    {
        for(int j=0;j<col;j++)
        {
            dfs(M,i,j,rol,col,M[i][j],0,curr);
        }
    }
    return ans;
    
}

int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> M(3,vector<int>(3,0));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>M[i][j];
        }
    }
    int ans = coinSweeper(M);
    cout<<ans;
    return 0;
}