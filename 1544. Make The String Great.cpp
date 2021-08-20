class Solution {
public:
    string makeGood(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==(s[i+1]+'a'-'A') || s[i]==(s[i+1]-'a'+'A') )
            {
                s.erase(i,2);
                i--;
                i--;
            }
            if(i==-2)
            {
                i++;
            }
        }
        return s;
    }
};