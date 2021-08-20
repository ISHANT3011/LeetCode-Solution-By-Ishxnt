class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int> v(101,0);
        int x,y;
        int mx=INT_MIN;
        int f = rounds.size();
        for(int i=1;i<rounds.size();i++)
        {
            if(rounds[i-1]<rounds[i])
            {
                x=rounds[i-1];
                y=rounds[i];
                for(int j=x;j<=y;j++)
                {
                    v[j]++;
                if(v[j]>mx)
                {
                    mx=v[j];
                }
                }
            }
            else
            {
                y=rounds[i-1];
                x=rounds[i];
                for(int j=y;j<=x+n;j++)
                {
                    if(j<=n)
                    {
                v[j]++;
                if(v[j]>mx)
                {
                    mx=v[j];
                }
                    }
                    else
                    {
                        v[j%n]++;
                if(v[j%n]>mx)
                {
                    mx=v[j%n];
                } 
                    }
                }
            }
            
        }
        for(int i=1;i<rounds.size()-1;i++)
        {
            v[rounds[i]]--;
        }
        mx = *max_element(v.begin(),v.end());
        vector<int> ans;
        for(int i=0;i<=100;i++)
        {
            if(v[i]==mx)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};