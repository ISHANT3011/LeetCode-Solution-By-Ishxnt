class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        // unordered_map<int,int> mp;
        // for(int i=0;i<logs.size();i++)
        // {
        //     for(int j=logs[i][0];j<logs[i][1];j++)
        //     {
        //         mp[j]++;
        //     }
        // }
        // int m = INT_MIN;
        // int ans = 0;
        // for(int i=1950;i<=2050;i++)
        // {
        //     if(m<mp[i])
        //     {
        //         m=mp[i];
        //         ans = i;
        //     }
        // }
        // return ans;
        int arr[2051] = {0};
        for(auto i:logs)
        {
            arr[i[0]]++;
            arr[i[1]]--;
        }
        int m = INT_MIN, res = 0;
        for(int i=1950; i<=2050; ++i)
        {
            arr[i] += arr[i-1];
            if(arr[i] > m)
            {
                m = arr[i];
                res = i;
            }
        }
        return res;
    }
};