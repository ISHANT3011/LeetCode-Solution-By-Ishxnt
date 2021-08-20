class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int n = nums.size();
        if(n<=1)
        {
            return false;
        }
        vector<pair<long int,long int>> v1;
        for(int i=0;i<n;i++)
        {
            v1.push_back({nums[i],i});
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((v1[j].first-v1[i].first)>t) break;
                if(abs(v1[j].second-v1[i].second)<=k) return true;
            }
        }
        return false;
    }
};