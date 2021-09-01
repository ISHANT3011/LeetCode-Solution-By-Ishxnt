class Solution {
public:
    int check(unordered_set<char> s,string w)
    {
        int n = w.size();
        for(int i=0;i<n;i++)
        {
            if(s.find(w[i])==s.end())
            {
                return false;
            }
            
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> s;
        int n = allowed.size();
        for(int i=0;i<n;i++)
        {
            s.insert(allowed[i]);
        }
        int m = words.size();
        int c=0;
        for(int j=0;j<m;j++)
        {
            if(check(s,words[j]))
            {
                c++;
            }
        }
        return c;
    }
};