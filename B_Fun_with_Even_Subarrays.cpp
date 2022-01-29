#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {   
            cin>>a[i];
        }
        long long int i = n-1;
        long long int ans = 0;
        while(i>=0)
        {
            if(a[i] == a[n-1])
            {
                i--;
            }
            else
            {
                ans++;
                i-=(n-i-1);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}