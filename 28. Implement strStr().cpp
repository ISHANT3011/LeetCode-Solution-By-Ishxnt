class Solution {
public:
    int strStr(string h, string a) {
        int n=h.size();
        int m = a.size();
        if(n==0 && m==0)
        {
            return 0;
        }
        else if(n==0)
        {
            return -1;
        }
        else if(m==0)
        {
            return 0;
        }
        if(n<m)
        {
            return -1;
        }
        if(n==m)
        {
            if(h==a)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        int j = 0;
        for(int i=0;i<n;i++)
        {
            if(h[i]==a[j])
            {
                int k =i;
                for(j=0;j<m;j++)
                {
                    if(h[k]==a[j])
                    {
                        k++;
                        continue;
                    }
                    else
                    {
                        break;
                    }
                    k++;
                    
                }
                if(j==m)
                {
                    return i;
                }
                j=0;
            }
        }
        return -1;
    }
};