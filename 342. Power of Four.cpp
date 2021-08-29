class Solution {
public:
    
    bool isPowerOfFour(int n) {
        int c =0;
        if(n==1)
        {
            return true;
        }
        if(n&1) return false;
        while(n>0)
        {
            n>>=1;
            if(n&1 && n!=1)
            {
                return false;
            }
            c++;
        }
        c--;
        if(c%2) return false;
        return true;
    }
};