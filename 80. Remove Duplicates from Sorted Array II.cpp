class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i =0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int i=0;
        for(auto it : mp)
        {
            if(it.second>2) it.second = 2;
            while(it.second--)
            {
                cout<<it.first<<" "<<it.second<<"\n";
                nums[i] = it.first;
                i++;
            }
        }
        
        
        return i;
    }
};