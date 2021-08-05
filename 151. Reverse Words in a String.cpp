class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        while(s[start]==' ') start++;
        int end = s.size()-1;
        while(s[end]==' ') end--;
        string st = "";
        string ans = "";
        for(int i=end;i>=start;i--)
        {
            if(s[i]!=' ')
            {
                st +=s[i];
            }
            else if(s[i]==' ')
            {
                reverse(st.begin(),st.end());
                ans+=st+' ';
                st.clear();
                i--;
                while(s[i]==' '){i--;}
                i++;
            }
        }
        reverse(st.begin(),st.end());
        ans +=st;
        return ans;
    }
};