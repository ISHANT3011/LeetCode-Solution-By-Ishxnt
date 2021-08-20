class Solution {
public:
    vector<vector<bool>> vis;
    bool dfs(vector<vector<char>>& board,int i,int j, string word,int k)
    {
        if(k==word.size())
        {
            return true;
        }
        
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[k] || vis[i][j])
        {
            return false;
        }
        vis[i][j]=true;
        
        if(dfs(board,i,j+1,word,k+1) || dfs(board,i+1,j,word,k+1) || dfs(board,i-1,j,word,k+1) || dfs(board,i,j-1,word,k+1) )
        {
            return true;
        }
        vis[i][j]=false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<char>> b;
        b = board;
        vector<vector<bool>> vis1(n,vector<bool>(m,false));
        vis = vis1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0] && n==1 && m==1 && word.size()==1)
                {
                    return true;
                }
                board=b;
                if(board[i][j]==word[0] && dfs(board,i,j,word,0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};