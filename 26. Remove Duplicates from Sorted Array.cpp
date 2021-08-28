class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        int ans = s.size();
        int i = 0;
        for(auto x : s)
        {
            nums[i]=x;
            i++;
        }
        while(i<n)
        {
            nums[i]=0;
            i++;
        }
        return ans;
    }
};