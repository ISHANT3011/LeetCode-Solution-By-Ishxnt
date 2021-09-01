class Solution {
public:
    int dp[101][2][2];
    int knap(vector<int>& nums, int i,int prev,int &st)
    {
        if(i==nums.size()){return 0;}
        if(dp[i][prev][st]!=-1) {return dp[i][prev][st];}
        if(i==nums.size()-1)
        {
            if(st)
            {
                return 0;
            }
            else
            {
                if(prev==1)
                {
                      return dp[i][prev][st] = knap(nums,i+1,0,st);
                }
                else
                {
                      return dp[i][prev][st] = max(nums[i] + knap(nums,i+1,1,st),knap(nums,i+1,0,st));
                }
            }
        }
        if(i==0)
        {
            if(st)
            {
                return dp[i][prev][st] = nums[i] + knap(nums,i+1,1,st);
            }
            else
            {
                return dp[i][prev][st] = knap(nums,i+1,0,st);
            }
        }
        if(prev==1)
        {
            return dp[i][prev][st] = knap(nums,i+1,0,st);
        }
        else
        {
            return dp[i][prev][st] = max(nums[i] + knap(nums,i+1,1,st),knap(nums,i+1,0,st));
        }
        return 0;
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int st = 1;
        int k1 = knap(nums,0,0,st);
        memset(dp,-1,sizeof(dp));
        st = 0;
        int k2 = knap(nums,0,0,st);
        return max(k2,k1);
    }
};