class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int col = mat[0].size();
        vector<vector<int>> ans;
        for(int i =0;i<row;i++)
        {
            vector<int> res;
            for(int j =0;j<col;j++)
            {
                int sum =0;
                for(int r = max(0,i-k);r <= min(row-1,i+k);r++)
                {
                    for(int c = max(0,j-k);c<=min(col-1,j+k);c++)
                    {
                        sum += mat[r][c];
                    }
                }
                res.push_back(sum);
            }
            ans.push_back(res);
        }
        return ans;
        
    }
};