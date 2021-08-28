class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        vector<int> v = a;
        a.clear();
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(v[i]<=b[j])
            {
                a.push_back(v[i]);
                i++;
            }
            else
            {
                a.push_back(b[j]);
                j++;
            }
        }
        if(i==m)
        {
            while(j<n)
            {
                a.push_back(b[j]);
                j++;
            }
        }
        else if(j==n)
        {
            while(i<m)
            {
                a.push_back(v[i]);
                i++;
            }
        }
        return;
    }
};