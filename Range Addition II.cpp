class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        vector<int> ans1(m,0);
        vector<int> ans2(n,0);
        int nu = ops.size();
        for(int i=0;i<nu;i++)
        {
            int ai = ops[i][0];
            int bi = ops[i][1];
            for(int j =0;j<ai;j++)
            {
                ans1[j]+=1;
            }
            for(int j =0;j<bi;j++)
            {
                ans2[j]+=1;
            }
        }
        int l=0,k=0;
        int large = ans1[0];
        for(int i = 0 ;i <m;i++ )
        {
            if(large==ans1[i])
            {
                l++;
            }else
            {
                break;
            }
        }
        for(int i = 0 ;i <n;i++ )
        {
            if(large==ans2[i])
            {
                k++;
            }else
            {
                break;
            }
        }
        return l*k;
    }
};