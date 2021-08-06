class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)
        {
            return true;
        }
        if(nums[0]==0)
        {
            return false;
        }
        int mxJump = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(mxJump<i+nums[i])
            {
                mxJump=i+nums[i];
            }
            if(i>=mxJump && i!=n-1)
            {
                return false;
            }
        }
        return true;
    }
};