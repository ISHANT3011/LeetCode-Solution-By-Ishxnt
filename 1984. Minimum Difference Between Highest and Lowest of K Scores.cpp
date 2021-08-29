class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int mn = INT_MAX;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n && i+k<=n;i++)
        {
            mn = min(mn,nums[i+k-1] - nums[i]);
        }
        return mn==INT_MAX?0:mn;
    }
};