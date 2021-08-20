class Solution {
public:
    int myAtoi(string s) {
        if(s.size()==0) return 0;
        int start = 0;
        while(s[start]==' ') start++;
        if(start >= s.size())
        {
            return 0;
        }
        int end = s.size() - 1;
        while(s[end]==' ') end--;
        int sign =1;
        if(s[start]=='-')
        {
            sign=-1;
            start++;
        }else if(s[start]=='+')
        {
            start++;
        }
        if(start >= s.size()||end<0||(start == end && (s[end]<'0' || s[end]>'9')))
        {
            return 0;
        }
        string st  = "";
        long int ans = 0;
        for(int i = start; i <= end ; i++)
        {
            if(s[i]< '0' || s[i]>'9')
            break;
            int a= s[i] -'0';
        
            ans=ans*10 + a;
            if(ans>INT_MAX) 
            {
                if(sign==-1)
                    return INT_MIN;
                else
                    return INT_MAX;
            }
        }
        return ans*sign;
        // long int x =0;
        // int c =0;
        // for(int i=st.size() - 1;i>=0;i--)
        // {
        //     x += (st[i]-'0')*pow(10,c++);
        //     if(x>INT_MAX)
        //     {
        //         return sign==-1?sign*INT_MAX-1:sign*INT_MAX;
        //     }
        // }
        // return sign*x;
    }
};class Solution {
public:
    int myAtoi(string s) {
        if(s.size()==0) return 0;
        int start = 0;
        while(s[start]==' ') start++;
        if(start >= s.size())
        {
            return 0;
        }
        int end = s.size() - 1;
        while(s[end]==' ') end--;
        int sign =1;
        if(s[start]=='-')
        {
            sign=-1;
            start++;
        }else if(s[start]=='+')
        {
            start++;
        }
        if(start >= s.size()||end<0||(start == end && (s[end]<'0' || s[end]>'9')))
        {
            return 0;
        }
        string st  = "";
        long int ans = 0;
        for(int i = start; i <= end ; i++)
        {
            if(s[i]< '0' || s[i]>'9')
            break;
            int a= s[i] -'0';
        
            ans=ans*10 + a;
            if(ans>INT_MAX) 
            {
                if(sign==-1)
                    return INT_MIN;
                else
                    return INT_MAX;
            }
        }
        return ans*sign;
        // long int x =0;
        // int c =0;
        // for(int i=st.size() - 1;i>=0;i--)
        // {
        //     x += (st[i]-'0')*pow(10,c++);
        //     if(x>INT_MAX)
        //     {
        //         return sign==-1?sign*INT_MAX-1:sign*INT_MAX;
        //     }
        // }
        // return sign*x;
    }
};