
class Solution {
public:
    int countPrimes(int n) {
        vector<int> ans(n+1,0);
        int k = sqrt(n);
        for(int i=2;i<=k;i++)
        {
            if(ans[i]==0)
            {
            for(int j=2;j*i<n;j++)
            {
                ans[i*j]++;
            }
            }
        }
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(ans[i]==0) c++;
        }
        return c;
    }
};