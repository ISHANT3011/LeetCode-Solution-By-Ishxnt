class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        if(n==1)
        {
            if(s[0]==' ')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        int j=n-1;
        while(j>=0&&s[j]==' '){ j--;}
        
        int c=0;
        //cout<<j;
        for(int i=j;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                c++;
            }
            else
            {
               break; 
            }
        }
        return c;
    }
};