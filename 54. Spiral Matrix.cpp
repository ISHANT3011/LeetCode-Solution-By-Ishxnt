class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& ans) {

        
        vector<int> a;
        int rowbegin = 0;
        int rowend = (ans.size())-1;
        int colbegin = 0;
        int colend = (ans[0].size())-1;
            
        while(rowbegin<=rowend && colbegin<=colend)
        {
            for(int i =colbegin;i<=colend;i++)
            {
                a.push_back(ans[rowbegin][i]);
            }
            rowbegin++;
            for(int i=rowbegin;i<=rowend;i++)
            {
                a.push_back(ans[i][colend]);
            }
            colend--;
            if(rowbegin<=rowend)
            {
                for(int i =colend;i>=colbegin;i--)
                {
                    a.push_back(ans[rowend][i]);
                }
            }
            rowend--;
            if(colbegin<=colend)
            {
                for(int i =rowend;i>=rowbegin;i--)
                {
                    a.push_back(ans[i][colbegin]);
                }
            }
            colbegin++;
        }
        return a;

    
    }
};