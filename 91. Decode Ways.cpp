class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0')
        {
            return 0;
        }

        int n = s.length();
        int dp[10000] = {0};
        dp[0] = 1;
        dp[1] = s[0] == '0' ? 0 : 1;

            for (int i=2; i<=n; i++) {
                if(s[i-1] != '0')
                { dp[i] += dp[i-1]; }
                string st = s.substr(i-2, 2);
                if ( stoi(st) - 10 >= 0  &&  stoi(st) - 27 < 0) {
                { dp[i] += dp[i-2]; }

                }
            }

    return dp[n];

    }
};