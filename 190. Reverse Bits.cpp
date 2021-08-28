class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        if(n==0)
        {
            return 0;
        }
        uint32_t  ans = 0;
        string s;
        while(n>0)
        {
            if(n&1)
            {
                s+='1';
            }
            else
            {
                s+='0';
            }
            n=n>>1;
        }
        cout<<s<<endl;
        cout<<s.size()<<endl;
        for(int i=s.size();i<32;i++)
        {
            s+='0';
        }
        cout<<s;
        
        int c =0;
        
        for(int i=31;i>=0;i--)
        {
            ans += (s[i]=='0')?0:pow(2,c);
            c++;
        }
        return ans;
    }
};