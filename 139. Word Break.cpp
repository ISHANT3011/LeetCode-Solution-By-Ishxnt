class Solution {
public:
//     int f;
//     void bt(string st,int n,int ind,unordered_set<string> &s)
//     {
//         if(f) return;
//         if(ind==n)
//         {
//             f = 1;
//             return;
//         }
        
//         string t = "";
//         for(int i=ind;i<n;i++)
//         {
//             if(f){ return;}
//             t += st[i];
//             if(s.find(t)!=s.end())
//             {
//                 bt(st,n,i+1,s);
//             }
//         }
//         return;
//     }
    bool wordBreak(string st, vector<string>& wordDict) {
        // int n = st.size();
        // unordered_set<string> s;
        // for(int i=0;i<wordDict.size();i++)
        // {
        //     s.insert(wordDict[i]);
        // }
        // f=0;
        // bt(st,n,0,s);
        // if(f) return true;
        // else
        //     return false;
        unordered_set<string> mp;
        for(int i = 0; i < wordDict.size(); i++) mp.insert(wordDict[i]);
        
        int n = st.length();
        vector<bool> present(n,0);
        
        for(int i = 0; i < n; i++)
        {
            int j = i;
            string curr = "";
            while(j >= 0)
            {
                curr.insert(0,1,st[j]);
                if(mp.find(curr)!=mp.end() && (j==0 || present[j-1])) 
                {
                    present[i] = 1;
                    break;
                }
                j--;
            }
        }
        
        return present[n-1];
    }
};