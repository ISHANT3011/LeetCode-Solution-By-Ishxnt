/// commented code is also an answer



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minsofar = INT_MAX;
        int profitifsoldtoday = 0;
        int max_profit =0;
        for(int i =0;i<n;i++)
        {
            if(minsofar>prices[i])
            {
                minsofar = prices[i];
            }
            profitifsoldtoday=prices[i]-minsofar;
            if(profitifsoldtoday>max_profit)
            {
                max_profit = profitifsoldtoday;
            }
        }
        return max_profit;
//         vector<int> v1(n);
//         vector<int> v2(n);
//         int mn = INT_MAX;
//         for(int i=0;i<n;i++)
//         {
//             if(mn>prices[i])
//             {
//                 mn=prices[i];
//             }
//             v1[i]=mn;
//         }
//         int mx = INT_MIN;
//         for(int i=n-1;i>=0;i--)
//         {
//             if(mx<prices[i])
//             {
//                 mx=prices[i];
//             }
//             v2[i]=mx;
//         }
//         int ans = INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             if(ans<v2[i]-v1[i])
//             {
//                 ans=v2[i]-v1[i];
//             }
//         }
        
//         return (ans>0)?ans:0;
    }
};