class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 1;
        }
        vector<int> dp(1+n);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
        

        // if(n < 3){
        //     if(n == 0) return 0;
        //     else return 1;
        // }
        // int a = 0, b = 1, c = 1 ;
        // int d = a + b + c;
        // for(int i = 1 ; i <= n - 3; i++){
        //     a = b;
        //     b = c;            
        //     c = d;            
        //     d = a + b + c;
        // }
        // return d;
    }
};