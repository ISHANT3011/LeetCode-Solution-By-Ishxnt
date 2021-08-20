class Solution {
public:
    int dp[501][501];
    int lcs(string s1,string s2,int n,int m)
    {
        if(n==0) return m;
        if(m==0) return n;
        if(dp[n][m]!=-1) return dp[n][m];
        if(s1[n-1]==s2[m-1])
        {
            return dp[n][m] = lcs(s1,s2,n-1,m-1);
        }
        else
        {
            return dp[n][m] = 1+ min(lcs(s1,s2,n-1,m-1),min(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1)));
        }
        
    }
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        return lcs(word1,word2,word1.size(),word2.size());
    }
};