class Solution {
public:
    string thousandSeparator(int n) {
        string st="";
        string s = to_string(n);
        int c=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(c==3)
            {
                st+='.';
                c=0;
                i++;
                continue;
            }
            if(c!=3)
            {
            st += s[i];
                c++;
            }
            
        }
        reverse(st.begin(),st.end());
        return st;
        
    }
};