class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
        {
            return true;
        }
        if(n==0||n==2||n==3)
            {
                return false;
            }
        int x =0;
        int c =6;
        while(c--)
        {
            x=0;
            while(n>0)
            {
                x+=pow(n%10,2);
                n/=10;
            }
            if(x==1)
            {
                return true;
            }
            if(x==0||x==2||x==3)
            {
                return false;
            }
            else
            {
                n=x;
            }
        }
        return false;
    }
};