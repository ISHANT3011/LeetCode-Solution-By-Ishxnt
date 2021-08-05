class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>> mat,vector<vector<int>> v)
    {
        v.clear();
        int n = mat.size();
        int m= mat[0].size();
        
        for(int i=0;i<m;i++)
        {
            vector<int> curr;
            for(int j=n-1;j>=0;j--)
            {
                curr.push_back(mat[j][i]);
            }
            v.push_back(curr);
        }
        return v;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        vector<vector<int>> ans;
        if(mat==target)
        {
            return true;
        }
        for(int i=0;i<=2;i++)
        {
            vector<vector<int>> temp;
            temp = rotate(mat,ans);
            if(temp==target)
            {
                return true;
            }
            mat = temp;
        }
        return false;
    }
};