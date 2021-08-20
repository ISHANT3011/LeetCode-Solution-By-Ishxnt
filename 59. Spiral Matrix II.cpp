class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int c = 1;
        vector<vector<int>> ans(n,vector<int>(n,0));
        int rowbegin = 0;
        int rowend = n-1;
        int colbegin = 0;
        int colend = n-1;
        while(rowbegin<=rowend && colbegin<=colend)
        {
            for(int i =colbegin;i<=colend;i++)
            {
                ans[rowbegin][i]=c++;
            }
            rowbegin++;
            for(int i=rowbegin;i<=rowend;i++)
            {
                ans[i][colend] = c++;
            }
            colend--;
            if(rowbegin<=rowend)
            {
                for(int i =colend;i>=colbegin;i--)
                {
                    ans[rowend][i]=c++;
                }
            }
            rowend--;
            if(colbegin<=colend)
            {
                for(int i =rowend;i>=rowbegin;i--)
                {
                    ans[i][colbegin]=c++;
                }
            }
            colbegin++;
        }
        return ans;
    }
};