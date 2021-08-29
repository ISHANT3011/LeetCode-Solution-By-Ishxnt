class Solution {
public:
    int secondHighest(string s) {
        int n = s.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if((s[i]-'0')>=0 && (s[i]-'0')<=9)
            {
                int k = (s[i]-'0');
                v.push_back(k);
            }
        }
        n = v.size();
        if(n==0)
        {
            return -1;
        }
        sort(v.begin(),v.end());
        int ans = -1;
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        int na = v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(v[i]!=na)
            {
                ans = v[i];
                break;
            }
        }
        return ans;
    }
};