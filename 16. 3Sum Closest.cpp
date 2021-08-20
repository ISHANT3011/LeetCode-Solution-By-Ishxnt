class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff = INT_MAX;
        int ans =0;
        for(int i=0;i < nums.size();i++)
        {
            int x = nums[i];
            int l=i+1,r=nums.size()-1;
            int currdiff = INT_MAX;
            while(l<r && r <nums.size())
            {
                int y = nums[l];
                int z = nums[r];
                int sum = x+y+z;
                if(sum>target)
                {
                    r--;
                    currdiff=abs(sum-target);
                }
                else if(sum<target)
                {
                    l++;
                    currdiff=abs(sum-target);
                }
                else if(sum == target)
                {
                    return target;
                }
                if(currdiff<=diff)
                {
                    diff = currdiff;
                    ans = sum;
                }
            }
        }
        return ans;
    }
};