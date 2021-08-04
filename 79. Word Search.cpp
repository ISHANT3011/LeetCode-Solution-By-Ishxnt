class Solution {
public:
    int flag = 0;
    bool dfs(vector<vector<char>>& board,int i,int j, string word,int k)
    {
        if(flag)
        {
            return true;
        }
        int t= word.size();
        if(k==t)
        {
            flag =1;
            return true;
        }
        if(board[i][j]==word[k])
        {
            board[i][j]='#';
            if(flag==0 && j+1<board[0].size())  dfs(board,i,j+1,word,k+1);
            if(flag==0 && i+1<board.size())  dfs(board,i+1,j,word,k+1);
            if(flag==0 && i-1>=0)  dfs(board,i-1,j,word,k+1);
            if(flag==0 && j-1>=0)  dfs(board,i,j-1,word,k+1);
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<char>> b;
        b = board;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0] && n==1 && m==1 && word.size()==1)
                {
                    return true;
                }
                board=b;
                if(board[i][j]==word[0])
                {
                    dfs(board,i,j,word,0);
                    if(flag)
                    {
                    return true;
                    }
                }
            }
        }
        return false;
    }
};