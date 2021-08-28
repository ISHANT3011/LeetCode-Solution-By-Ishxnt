class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(),m = mat[0].size();
        if(n*m!=r*c)
        {
            return mat;
        }
        vector<vector<int>> ans(r,vector<int>(c,0));
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mat[0].push_back(mat[i][j]);
            }
            
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ti=0;
                tj+=1;
                ans[i][j] = mat[ti][tj];
            }
        }
        return ans;
    }
};