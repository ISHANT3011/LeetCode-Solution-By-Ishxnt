class Solution {
public:
    void backtracking(string curr,vector<string>&ans,int n,int open,int close)
    {
        if(curr.size()==2*n && open==n && close == n)
        {
            ans.push_back(curr);
            return;
        }
        if(curr.empty())
        {
            curr=curr+'(';
            open++;
        }
        if(open==n && close<n)
        {
            backtracking(curr+')',ans,n,open,close+1);
        }
        if(open<n && close<n && open>=close)
        {
            backtracking(curr+'(',ans,n,open+1,close);  
            backtracking(curr+')',ans,n,open,close+1);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr="";
        backtracking(curr,ans,n,0,0);
        return ans;
    }
};