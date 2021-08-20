class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int i=0,j=0;
        int sum = 0;
        while(i<n && j<n)
        {
            sum+=mat[i][j];
            i++;
            j++;
        }
        i=n-1;
        j=0;
        while(j<n)
        {
            sum+=mat[i][j];
            i--;
            j++;
        }
        if(n%2)
        {
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
    
};