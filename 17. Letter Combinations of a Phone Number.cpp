class Solution {
public:
    void bt(string digits,string curr,vector<string>& ans,unordered_map<int,string>& mp,int i)
    {
        int n = digits.size();
        if(i==n)
        {
            ans.push_back(curr);
            return;
        }
            string s = mp[digits[i]-'0'];
            for(int j=0;j<s.size();j++)
            {
                curr += s[j];
                bt(digits,curr,ans,mp,i+1);
                curr.pop_back();
            }
        
        return;
    }
    vector<string> letterCombinations(string digits) {
        
        unordered_map<int,string > mp;
        mp.insert({2 ,"abc"});
        mp.insert({3,"def"});
        mp.insert({4,"ghi"});
        mp.insert({5,"jkl"});
        mp.insert({7,"pqrs"});
        mp.insert({6,"mno"});
        mp.insert({8,"tuv"});
        mp.insert({9,"wxyz"});
        int n = digits.size();
        string curr ="";
        vector<string> ans;
        if(n==0) return ans;
        bt(digits,curr,ans,mp,0);
        return ans;
    }
};