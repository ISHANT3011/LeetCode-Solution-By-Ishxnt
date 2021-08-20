class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int n = nums.size();
        int h = n-1;
        int mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            if((mid==0 || nums[mid-1]<=nums[mid]) && (mid==n-1 || nums[mid+1]<=nums[mid]))
            {
                return mid;
            }
            else if(mid>0 && nums[mid-1]>nums[mid])
            {
                h = mid -1;
            }
            else
            {
                l=mid+1;
            }
        }
        return mid;
    }
};