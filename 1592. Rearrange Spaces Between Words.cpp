class Solution {
public:
    string reorderSpaces(string text) {
        int n = text.size();
        vector<string> word;
        int c = 0;
        for(int i=0;i<n;i++)
        {
            if(text[i]!=' ')
            {
                string t = "";
                while(i<n && text[i]!=' ')
                {
                    t += text[i];
                    i++;
                    c++;
                }
                word.push_back(t);
                i--;
            }
        }
        int m = word.size();
        if(c==n)
        {
            return text;
        }
        n = n-c;
        for(int i=0;i<m;i++)
        {
            cout<<word[i]<<" ";
        }
        cout<<endl;
        int s_add = 0;
        if(m==1)
        {
            string t ="";
            t += word[0];
            while(n--) t+=" ";
            return t;
        }
        if(n%(m-1)==0)
        {
            n = n/(m-1);
        }
        else
        {
            s_add = n%(m-1);
            n = n/(m-1);
        }
        string ans = "";
        for(int i=0;i<m;i++)
        {
            ans += word[i];
            int temp = n;
            while(i<m-1&&temp--){ans+=" ";}
        }
        while(s_add--) { ans+=" ";}
        return ans;
    }
};