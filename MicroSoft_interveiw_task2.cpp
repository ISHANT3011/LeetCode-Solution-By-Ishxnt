void solution(int n,vector<int>&r,vector<int>&c){
    vector<vector<int>>ans(n,vector<int>(n,0));
    int i,j;
    for(i=0;i<r.size();i++){
        ans[r[i]][c[i]]=-1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ans[i][j]!=-1)
            {
                if(ans[i][j-1]==-1 && i>=0 && i<n && j-1>=0 && j-1<n)
                {
                    ans[i][j]++;
                }
                if(ans[i-1][j]==-1 && i-1>=0 && i-1<n && j>=0 && j<n)
                {
                    ans[i][j]++;
                }
                if(ans[i-1][j-1]==-1 && i-1>=0 && i-1<n && j-1>=0 && j-1<n)
                {
                    ans[i][j]++;
                }
                if(ans[i+1][j]==-1 && i+1>=0 && i+1<n && j>=0 && j<n)
                {
                    ans[i][j]++;
                }
                if(ans[i][j+1]==-1 && i>=0 && i<n && j+1>=0 && j+1<n)
                {
                    ans[i][j]++;
                }
                if(ans[i+1][j+1]==-1 && i+1>=0 && i+1<n && j+1>=0 && j+1<n)
                {
                    ans[i][j]++;
                }
                if(ans[i+1][j-1]==-1 && i+1>=0 && i+1<n && j-1>=0 && j-1<n)
                {
                    ans[i][j]++;
                }
                if(ans[i-1][j+1]==-1 && i-1>=0 && i-1<n && j+1>=0 && j+1<n)
                {
                    ans[i][j]++;
                }
            }
        }
    } 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ans[i][j]!=-1)
            {
                cout<<ans[i][j];
            }
            else{
                cout<<"B";
            }

        }
        cout<<"\n";
    }    
}