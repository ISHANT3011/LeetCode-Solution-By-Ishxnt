class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int mx, curr, ans = 1;
        mx = curr = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] < mx){
                mx = curr;
                ans = i + 1;
            }
            else if(nums[i] > curr){
                curr = nums[i];                
            }
        }
        return ans;
        
    }
};