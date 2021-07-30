class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        //cout<<n;
        char m;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else{
                if(st.empty())
                {
                    return false;
                }
                
                if(s[i]==')')
                {
                    m = '(';
                }
                else if(s[i]=='}')
                {
                    m = '{';
                }
                else if(s[i]==']')
                {
                    m = '[';
                }
                char m1= st.top();
                if(m1== m )
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        //cout<<st.size();
        return st.empty();
    }
};