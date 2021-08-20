class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tit) {
        int n = nums.size();
        int  l =0;
        int h =n-1;
        int index = -1 ;
        if(n==1 && tit == nums[0])
        {
            return {0,0};
        }
        else if(n==1)
        {
            return {-1,-1};
        }
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(nums[mid]==tit)
            {
                index = mid;
                break;
            }
            else if(tit>nums[mid])
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        vector<int> v;
        if(index == -1)
        {
            v.push_back(-1);v.push_back(-1);
            return v;
        }
        int temp = index;
        while(temp>=0 && nums[temp]==nums[index])
        {
            temp--;
        }
        v.push_back(temp+1);
        temp = index;
        while(temp<=n-1 && nums[temp]==nums[index])
        {
            temp++;
        }
        v.push_back(temp-1);
        return v;
    }
};