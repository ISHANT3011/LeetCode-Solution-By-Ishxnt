class Solution {
public:
    vector<vector<int>> ans;
    void bt(vector<int> curr,vector<int> &c,int t,int idx)
    {
        if(t==0)
        {
            ans.push_back(curr);
            return;
        }
        for(int i=idx;i<c.size();i++)
        {
            if(i>idx && c[i]==c[i-1])
            {
                continue;
            }
            if(t-c[i]<0)
            {
                break;
            }
            curr.push_back(c[i]);
            bt(curr,c,t-c[i],i+1);
            curr.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<int> curr;
        sort(c.begin(),c.end());
        bt(curr,c,t,0);
        return ans;
    }
};