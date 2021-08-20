class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& a) {
        map<int,int> mp;
        int n = a.size();
        for(int i=0;i<n;i++)
        {
            mp[a[i][0]]=i;
        }
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            auto it = mp.lower_bound(a[i][1]);
            if(it==mp.end())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(it->second);
            }
        }
        return v;
        
    }
};