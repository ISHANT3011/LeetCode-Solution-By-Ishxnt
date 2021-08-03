class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        cost.push_back(0);
        vector<int> dp(n+1,0);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<dp.size();i++)
        {
            dp[i]=cost[i]+min(dp[i-2],dp[i-1]);
        }
        return dp[dp.size()-1];
    }
};