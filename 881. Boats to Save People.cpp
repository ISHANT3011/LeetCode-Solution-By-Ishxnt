class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        int n = p.size();
        int i = 0;
        int j=n-1;
        int ans=0;
        sort(p.begin(),p.end());
        while(i<=j)
        {
            if(p[i]+p[j]<=l)
            {
                ans++;
                i++;
                j--;
            }
            else
            {
                ans++;
                j--;
            }
        }
        return ans;
    }
};