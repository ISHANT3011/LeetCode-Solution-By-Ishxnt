class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> row(9,vector<bool>(9,false));
        vector<vector<bool>> col(9,vector<bool>(9,false));
        vector<vector<vector<bool>>> grid(3,vector<vector<bool>>(3,vector<bool>(9,false)));
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='.') continue;
                int number = board[i][j] - '0';
                if(row[i][number-1] || col[j][number-1] || grid[i/3][j/3][number-1])
                {
                    return false;
                }
                else
                {
                    row[i][number-1] = true; col[j][number-1] = true;grid[i/3][j/3][number-1] = true;
                }
            }
        }
                                                        
        return true;
                                                        
                                                        
    }
};