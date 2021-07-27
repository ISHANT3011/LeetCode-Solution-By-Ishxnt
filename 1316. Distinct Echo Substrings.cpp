class Solution {
public:
    bool check(string s)
    {
        int n = s.size();
        if(n%2!=0)
        {
            return false;
        }
        else
        {
            int i = 0;
            int j =n/2;
            while(j<n)
            {
                if(s[i]!=s[j])
                {
                    return false;
                }
                i++;
                j++;
            }
        }
        return true;
    }
    int distinctEchoSubstrings(string text) {
        // int n = text.size();
        // int c = 0;
        // unordered_set<string_view> st;
        // for(int i =0;i<n;i++)
        // {
        //     string_view str = "";
        //     for(int j =i;j<n;j++)
        //     {
        //         str = str + text[j];
        //         if(check(str) && st.find(str) == st.end())
        //         {
        //             st.insert(str);
        //             c++;
        //         }
        //     }
        // }
        // return c;
        int n=text.length();
        if(n==1) return 0;
        if(n==2){
            if(text[0]==text[1]) return true;
            return false;
        }
        set<string_view>s;
        string_view str=text;
        for(int i=0;i<n;i++){
           for(int len=2;i+len-1<n;len+=2){
               string_view a1=str.substr(i,len/2);
               string_view a2=str.substr(i+len/2,len/2);
               if(a1==a2){
                   
                   s.insert(a1);
               }
                   
           }
        }
        return s.size();
    }
};;
