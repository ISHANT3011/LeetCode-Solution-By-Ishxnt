class Solution {
public:
    void bt(vector<int>nums,vector<vector<int>>& ans,int idx)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            if(i!=idx && nums[i]==nums[idx])
                continue;
            swap(nums[i],nums[idx]);
            bt(nums,ans,idx+1);
        }
        return;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        bt(nums,ans,0);
        return ans;
    }
};