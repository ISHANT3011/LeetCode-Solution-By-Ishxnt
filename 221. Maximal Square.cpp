class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        if(n==1 && m==1)
        {
            if(matrix[0][0]=='0')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        vector<vector<int>> vec(n,vector<int>(m,0));
        int mx = INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(matrix[i][j]=='1')
                {
                vec[i][j] = min((i+1<=n-1&&j+1<=m-1)?vec[i+1][j+1]:-1,min(i+1<=n-1?vec[i+1][j]:-1,j+1<=m-1?vec[i][j+1]:-1)) + 1;
                if(matrix[i][j]=='1' && vec[i][j]<1)
                {
                    vec[i][j]=1;
                }
                }
                
                mx = max(vec[i][j],mx);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
        return mx*mx;
    }
};