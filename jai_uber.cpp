if(k%2==0)
{
    int n = x.size();
    int m = y.size();
    int sum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int temp =0;
        int t = k;
        while(t--)
        {
            int idx = i;
            temp +=x[idx];
            idx++;
        }
        sum=max(temp,sum);
    }
    for(int i=0;i<m;i++)
    {
        int temp =0;
        int t = k;
        while(t--)
        {
            int idx = i;
            temp +=x[idx];
            idx++;
        }
        sum=max(temp,sum);
    }
    return sum;
}