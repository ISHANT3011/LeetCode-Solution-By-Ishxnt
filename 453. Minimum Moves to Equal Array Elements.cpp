class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            sum +=nums[0]-nums[i];
        }
        return -1*sum;
    }
};