class Solution {
public:
    int canBeTypedWords(string t, string b) {
        unordered_set<char> s;
        for(int i=0;i<b.size();i++)
        {
            s.insert(b[i]);
        }
        int c=0;
        vector<string> v;
        string st = "";
        for(int i=0;i<t.size();i++)
        {
            st += t[i];
            if(t[i]==' ')
            {
                v.push_back(st);
                st = "";
            }
        }
        v.push_back(st);
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(s.find(v[i][j])!=s.end())
                {
                    break;
                }
                if(j==v[i].size()-1)
                {
                    c++;
                }
            }
            
        }
        return c;
    }
};