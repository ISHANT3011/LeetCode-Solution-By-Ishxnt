class Solution {
public:
    int numTrees(int n) {
        if(n==1 ) return 1;
        if(n==2 ) return 2;
        vector<int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        int ans = 0;
        for(int i=2;i<=n;i++)
        {
            int l = 0;
            int r = i-1;
            while(l<=i-1)
            {
                dp[i] += dp[l]*dp[r];
                l++;
                r--;
            }
        }
        return dp[n];
    }
};