class Solution {
public:
    bool check(string word, string s)
    {
        int n = word.size();
        int m = s.size();
        if(m>n)
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(word[i]==s[0])
            {
                int k = i;
                int j;
                for(j=0;j<m;j++,k++)
                {
                    if(word[k]==s[j])
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                if(j==m)
                {
                    return true;
                }
            }
        }
        return false;
    }
    int numOfStrings(vector<string>& patterns, string word) {
        int n = patterns.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(check(word,patterns[i]))
            {
                c++;
            }
        }
        return c;
    }
};