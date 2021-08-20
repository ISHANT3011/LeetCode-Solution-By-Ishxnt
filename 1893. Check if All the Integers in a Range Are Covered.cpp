class Solution {
public:
    bool isCovered(vector<vector<int>>& rs, int l, int r) {
        vector<bool> v(51,false);
        int n = rs.size();
        for(int i=0;i<n;i++)
        {
            for(int j=l;j<=r;j++)
            {
                if(rs[i][0]<=j && rs[i][1]>=j )
                {
                    v[j]=true;
                }
                
            }
        }
        for(int i=l;i<=r;i++)
        {
            if(v[i]==false)
            {
                return false;
            }
        }
        return true;
    }
};