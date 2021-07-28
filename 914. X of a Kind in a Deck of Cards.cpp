class Solution {
public:
    
    bool hasGroupsSizeX(vector<int>& d) {
        unordered_map<int,int> mp;
        int n = d.size();
        if(n<=1)
        {
            return false;
        }
        for(int i =0;i<n;i++)
        {
            mp[d[i]]++;
        }
        int x = 0;
        for(auto it : mp)
        {
            if(x==0)
            {
                x = it.second;
            }
            else
            {
                x= __gcd(x,it.second);
            }
        }
        if(x>1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};