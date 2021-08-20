class Solution {
public:
    void comRur(vector<int>& candidates, int target,int idx,vector<vector<int>> &ans,vector<int> curr )
    {
        if(target<0)
        {
            return;
        }
        if(target==0)
        {
            ans.push_back(curr);
            return;
        }
        int n = candidates.size();
        for(int i =idx;i<n;i++)
        {
            curr.push_back(candidates[i]);
            comRur(candidates,target-candidates[i],i,ans,curr);
            curr.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> ans;
        comRur(candidates,target,0,ans,curr);
        return ans;
    }
};