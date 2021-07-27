class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        vector<int> ans;
        while(2*i < n)
        {
            int freq = nums[2*i];
            while(freq--)
            {
                ans.push_back(nums[2*i + 1]);
            }
            i++;
        }
        return ans;
    }
};