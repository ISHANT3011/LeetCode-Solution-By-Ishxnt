class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        int n = nums.size();
        int c = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==val)
            {
                continue;
            }
            else
            {
                c++;
                ans.push_back(nums[i]);
            }
        }
        int k = ans.size();
        nums.clear();
        for(int i=0;i<k;i++)
        {
            nums.push_back(ans[i]);
        }
        return c;
    }
};