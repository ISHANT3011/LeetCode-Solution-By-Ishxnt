class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>> zeros;
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    zeros.push_back({i,j});
                }
            }
        }
        for(int i=0;i<zeros.size();i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[j][zeros[i].second]=0;
            }
            for(int j=0;j<m;j++)
            {
                matrix[zeros[i].first][j]=0;
            }
        }
    }
};