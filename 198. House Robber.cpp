class Solution {
public:
    int dp[101][2];
    int knap(vector<int>& nums, int i,int prev)
    {
        if(i==nums.size())
        {
            return 0;
        }
        if(dp[i][prev]!=-1) {return dp[i][prev];}
        if(prev==1)
        {
            return dp[i][prev] = knap(nums,i+1,0);
        }
        else
        {
            return dp[i][prev] = max(nums[i] + knap(nums,i+1,1),knap(nums,i+1,0));
        }
        return 0;
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int n = nums.size();
        return knap(nums,0,0);
    }
};