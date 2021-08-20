class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)
        {
            return 0;
        }
        int mxJump = nums[0];
        int n = nums.size();
        int ans =0;
        int j;
        int mx=0;
        int idx =0;
        for(int i=1;i<n;i++)
        {
            j=i;
            while(mxJump>=j && j<n)
            {
                if(mx<j+nums[j])
                {
                    mx = j+nums[j];
                    idx = j;
                }
                j++;
            }
            ans++;
            if(j==n)
            {
                return ans;
            }
            mxJump = mx;
            i=idx;
            if(mxJump>=n-1)
            {
                return ans+1;
            }
        }
        return ans;
    }
};