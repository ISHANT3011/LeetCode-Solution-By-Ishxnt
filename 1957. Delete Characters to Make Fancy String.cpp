class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
        if(n<=2)
        {
            return s;
        }
        string ans = "";
        ans += s[0];
        ans+= s[1];
        for(int i=2;i<n;i++)
        {
            if(s[i]==ans[ans.size()-1] && s[i]==ans[ans.size()-2])
            {
                continue;
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};