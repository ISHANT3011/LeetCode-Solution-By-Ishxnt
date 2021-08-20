class Solution {
public:
    vector<vector<int>> ans;
    void bt(vector<int> curr,int k,int n,int idx)
    {
        if(k==0)
        {
            ans.push_back(curr);
            return;
        }
        for(int i=idx;i<n;i++)
        {
            curr.push_back(i+1);
            bt(curr,k-1,n,i+1);
            curr.pop_back();
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> curr;
        bt(curr,k,n,0);
        return ans;
    }
};