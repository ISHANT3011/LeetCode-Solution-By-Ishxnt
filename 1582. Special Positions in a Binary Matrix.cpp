class Solution {
public:
    // bool check(int row,int col,vector<vector<int>> mat){
    //     for(int i=0;i<mat.size();i++)
    //     {
    //         if(row!=i)
    //         {
    //         if(mat[i][col]==0)
    //         {
    //             continue;
    //         }
    //             else
    //             {
    //                 return false;
    //             }
    //         }
    //     }
    //     for(int i=0;i<mat[0].size();i++)
    //     {
    //         if(col!=i)
    //         {
    //         if(mat[row][i]==0)
    //         {
    //             continue;
    //         }
    //             else
    //             {
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size(),col=mat[0].size(),ans=0;
        vector<int> countInRow(row,0),countInCol(col,0);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
                if(mat[i][j]==1)
                {
                    countInRow[i]++;
                    countInCol[j]++;
                }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==1&&countInRow[i]==1&&countInCol[j]==1)
                    ans++;
            }
        }
        return ans;
        // int c=0;
        // for(int i=0;i<mat.size();i++)
        // {
        //     for(int j=0;j<mat[0].size();j++)
        //     {
        //         if(mat[i][j]==1)
        //         {
        //             if(check(i,j,mat))
        //             {
        //                 c++;
        //             }
        //         }
        //     }
        // }
        // return c;
    }
};