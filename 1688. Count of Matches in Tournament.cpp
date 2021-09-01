class Solution {
public:
    int numberOfMatches(int n) {
        int ans = 0;
        while(n!=1)
        {
            if(n&1)
            {
                ans +=1;
                ans += (n-1)/2;
                n = n-1;
                n/=2;
            }
            else
            {
                n/=2;
                ans+=n;
            }
        }
        return ans;
    }
};