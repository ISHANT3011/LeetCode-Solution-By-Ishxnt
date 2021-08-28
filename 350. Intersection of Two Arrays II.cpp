class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> v;
        vector<int> c(1001,0);
        unordered_set<int> s;
        if(n>m)
        {
            for(int i=0;i<n;i++)
            {
                s.insert(nums1[i]);
                c[nums1[i]]++;
            }
            for(int i=0;i<m;i++)
            {
                if(s.find(nums2[i])!=s.end())
                {
                    c[nums2[i]]--;
                    //cout<<c[nums2[i]];
                    if(c[nums2[i]]>=0)
                    {
                    v.push_back(nums2[i]);
                    }
                }
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
                s.insert(nums2[i]);
                c[nums2[i]]++;
            }
            for(int i=0;i<n;i++)
            {
                
                if(s.find(nums1[i])!=s.end())
                {
                    c[nums1[i]]--;
                    if(c[nums1[i]]>=0)
                    {
                    v.push_back(nums1[i]);
                    }
                }
            }
        }
        return v;
    }
};