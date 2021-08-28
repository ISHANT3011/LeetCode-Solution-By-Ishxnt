class Solution {
public:
    int firstUniqChar(string s) {
        int ans = INT_MAX;
        vector<pair<int,int>> v(26,{0,0});
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a'].first +=1;
            if(v[s[i]-'a'].first == 1)
            {
                v[s[i]-'a'].second = i;
            }
        }
        
        for( int i=0 ; i<26 ; i++ )
        {
            if ( v[i].first == 1 )
            {
                if( ans > v[i].second )
                {
                    ans = v[i].second;
                }
            }
        }
        return ans == INT_MAX?-1:ans;
        
    }
};