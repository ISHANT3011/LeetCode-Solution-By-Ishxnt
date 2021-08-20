class Solution {
public:
    bool check0(vector<vector<int>> b,int i,int j)
    {
        int n = b.size();
        int m = b[0].size();
        int c = 0;
        if(j+1<m && b[i][j+1]==1 )
        {
            c++;
        }
        if(i+1<n && b[i+1][j]==1 )
        {
            c++;
        }
        
        if(i-1>=0 && b[i-1][j]==1 )
        {
            c++;
        }
        if(j-1>=0 && b[i][j-1]==1 )
        {
            c++;
        }
        
        if( i+1<n && j+1<m &&  b[i+1][j+1]==1 )
        {
            c++;
        }
        if(i-1>=0 && j+1<m && b[i-1][j+1]==1 )
        {
            c++;
        }
        
        if(j-1>=0 && i+1<n && b[i+1][j-1]==1 )
        {
            c++;
        }
        if(j-1>=0 && i-1>=0 && b[i-1][j-1]==1 )
        {
            c++;
        }
        if(c==3)
        {
            return true;
        }
        return false;
    }
    bool check1(vector<vector<int>> b,int i,int j)
    {
        int n = b.size();
        int m = b[0].size();
        int c = 0;
        if(j+1<m && b[i][j+1]==1 )
        {
            c++;
        }
        if(i+1<n && b[i+1][j]==1 )
        {
            c++;
        }
        
        
        if(i-1>=0 && b[i-1][j]==1 )
        {
            c++;
        }
        if(j-1>=0 && b[i][j-1]==1 )
        {
            c++;
        }
        
        
        if( i+1<n && j+1<m &&  b[i+1][j+1]==1 )
        {
            c++;
        }
        if(i-1>=0 && j+1<m && b[i-1][j+1]==1 )
        {
            c++;
        }
        
        
        if(j-1>=0 && i+1<n && b[i+1][j-1]==1 )
        {
            c++;
        }
        if(j-1>=0 && i-1>=0 && b[i-1][j-1]==1 )
        {
            c++;
        }
        
        
        if(c>3 || c<2)
        {
            return true;
        }
        return false;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<pair<int,int>> v_z;
        vector<pair<int,int>> v_o;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==0)
                {
                    if(check0(board,i,j))
                    {
                        v_z.push_back({i,j});
                    }
                }
                if(board[i][j]==1)
                {
                    if(check1(board,i,j))
                    {
                        v_o.push_back({i,j});
                    }
                }
            }
        }
        for(int i=0;i<v_z.size();i++)
        {
            board[v_z[i].first][v_z[i].second]=1;
        }
        for(int i=0;i<v_o.size();i++)
        {
            board[v_o[i].first][v_o[i].second]=0;
        }

    }
};