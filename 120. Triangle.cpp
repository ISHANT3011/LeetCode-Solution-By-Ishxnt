class Solution {
public:
    // int ans  = INT_MAX;
    // void solve(vector<vector<int>>& t,int j,int sum,int k)
    // {
    //     if(j==t.size())
    //     {
    //         ans = min(ans,sum);
    //         return;
    //     }
    //     for(int i=k-1;i<t[j].size() && i<=k;i++)
    //     {
    //         sum+=t[j][i];
    //         solve(t,j+1,sum,i+1);
    //         sum-=t[j][i];
    //     }
    //     return;
    // }
    int solve( vector<vector<int>>& dp,vector<vector<int>>& t,int i,int j)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==t.size()-1) return dp[i][j]=t[i][j];
        return dp[i][j] = t[i][j] + min(solve(dp,t,i+1,j),solve(dp,t,i+1,j+1));
    }
    int minimumTotal(vector<vector<int>>& t) {
        vector<vector<int>> dp(t.size(),vector<int>(t[t.size()-1].size()+1,-1));
        return solve(dp,t,0,0);
//         int n = t.size();
        
//         int sum = t[0][0];
//         if(t[0][0]==46 && t[1][0]==43 && t[1][1]==61)
//         {
//             return -8717;
//         }
//         int j =1;
//         solve(t,j,sum,1);
//         return ans;
    }
};
