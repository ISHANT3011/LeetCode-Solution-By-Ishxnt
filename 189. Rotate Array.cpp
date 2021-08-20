class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        k = n -k;
        int i;
        for(i=0;i<k;i++)
        {
            nums.push_back(nums[i]);
        }
        nums.erase(nums.begin(),nums.begin()+i);
    }
};