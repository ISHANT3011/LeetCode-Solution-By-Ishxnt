class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> s;
        for(int i=0;i<n;i++)
        {
            if(s.find(nums[i])!=s.end())
            {
                auto it = s.find(nums[i]);
                int x = it->second;
                int diff = abs(x-i);
                if(diff<=k)
                {
                    return true;
                }
                else
                {
                    it->second = i;
                }
            }
            else
            {
                s.insert({nums[i],i);
            }
        }
        return false;
    }
};