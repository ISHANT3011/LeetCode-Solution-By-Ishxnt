class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int n = acc.size();
        int m = acc[0].size();
        int ans =INT_MIN;
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            for(int j=0;j<m;j++)
            {
                sum+=acc[i][j];
            }
            ans = max(ans,sum);
        }
        return ans;
    }
};