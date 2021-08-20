class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        int n = p.size();
        if(n<3)
        {
            return 0;
        }
        int res = 0;
        for(int i=0;i<n;i++)
        {
            unordered_map<int,int> mp;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                int x1 = p[i][0],y1=p[i][1];
                int x2 = p[j][0],y2=p[j][1];
                int d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
                res = res + mp[d];
                mp[d]++;
            }
        }
        return res*2;
        
    }
};
