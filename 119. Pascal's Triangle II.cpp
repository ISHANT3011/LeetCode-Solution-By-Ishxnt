class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector<int>> out;
        vector<int> temp{1};
        out.push_back(temp);
        for (int i = 1; i <= n; i++) 
        {
            vector<int> tmp(i+1, 1);
            for (int j = 1; j < tmp.size() - 1; j++) 
            {
                tmp[j] = out[i - 1][j - 1] + out[i - 1][j];
            }
            out.push_back(tmp);
            if(i==n)
            {
                return tmp;
            }
        }
        return temp;
    }
};