#include <bits/stdc++.h>
using namespace std;
void transpose(vector<int> A, vector<int> B)
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
}
int main() {
    long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> vec(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>vec[i][j];
            }
        }
        // if(n==3)
        // {
        //     cout<<"13";
        // }
        // else
        // {
        //     cout<<n*n;
        // }
        int ans = n*n;
        int c =2;
        while(c<=n)
        {
            for(int i=0;i<n-c;i++)
            {
                for(int j =0;j<n-c;j++)
                {
                    vector<vector<int>> v(c,vector<int>(c));
                    for(int u=0;i<c;i++)
            {
                for(int k =0;j<c;j++)
                {
                    v[u][k]=vec[i+u][j+u];
                }
            }
            transpose(v,v2);
            if(v==v2)
            {
                ans++;
            }
                }
            }
            c++;
        }
        cout<<ans<<endl;
    }
    return 0;
}