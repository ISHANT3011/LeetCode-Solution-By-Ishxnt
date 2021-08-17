class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j =0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                int temp = nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                int temp = nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
            }
        }
    }
};