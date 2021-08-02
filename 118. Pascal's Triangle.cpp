class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> out;
        out.push_back({{1}});

        for (int i = 1; i < numRows; i++) {
            vector<int> tmp(i+1, 1);
            for (int j = 1; j < tmp.size() - 1; j++) {
                tmp[j] = out[i - 1][j - 1] + out[i - 1][j];
            }
            out.push_back(tmp);
        }
        
        return out;
    }
};