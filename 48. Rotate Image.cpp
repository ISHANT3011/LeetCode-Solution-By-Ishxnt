class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> ans;
        for(int j=0;j<m;j++)
        {
            vector<int> curr;
            for(int i = n-1;i>=0;i--)
            {
                curr.push_back(matrix[i][j]);
            }
            ans.push_back(curr);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j]=ans[i][j];
            }
        }
    }
};