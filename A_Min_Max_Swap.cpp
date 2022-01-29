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
        vector<int> b(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(a[i]<=b[i])
            {
                continue;
            }
            else
            {
                int temp = a[i];
                a[i]=b[i];
                b[i]=temp;
            }
        }

        int ma=0,mb=0;
        for(int i=0;i<n;i++)
        {
            if(ma<a[i])
            {
                ma=a[i];
            }
            if(mb<b[i])
            {
                mb=b[i];
            }
        }
        int ans = ma*mb;
        cout<<ans<<"\n";
    }
    return 0;
}