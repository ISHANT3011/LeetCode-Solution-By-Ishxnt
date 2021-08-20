class Solution {
public:
    bool isThree(int n) {
        int C=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                C++;
            }
            if( C>3)
            {
                return false;
            }
        }
        if(C==3)
        {
            return true;
        }
        return false;
    }
};