class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n = s.size();
        vector<int> v(26,0);
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
        }
        int c = v[s[0]-'a'];
        for(int i=0;i<26;i++)
        {
            if(v[i]!=c)
            {
                if(v[i]!=0)
                {
                  return false;
                }
            }
        }
        return true;
    }
};