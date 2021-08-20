class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        int f = fb.size();
        if(n==0)
        {
            return true;
        }
        if(f==1 && n<=1)
        {
            if(fb[0]==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        if(fb[0]==0)
        {
            if(fb[1]==0)
            {
                n--;
                fb[0]=1;
            }
        }
        if(n==0)
        {
            return true;
        }
        if(fb[f-1]==0)
        {
            if(fb[f-2]==0)
            {
                n--;
                fb[f-1]=1;
            }
        }
        if(n==0)
        {
            return true;
        }
        
        for(int i=1;i<=f-2;i++)
        {
            if(fb[i]==0)
            {
                if(fb[i-1]==0 && fb[i+1]==0)
                {
                    fb[i]=1;
                    n--;
                }
            }
            if(n==0)
            {
                return true;
            }
        }
        if(n>0)
        {
        return false;
        }
        return true;
    }
};