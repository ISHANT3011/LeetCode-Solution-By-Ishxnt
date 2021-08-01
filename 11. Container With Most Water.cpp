class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int i =0;
        int j = n-1;
        int mx = INT_MIN;
        while(i<j)
        {
            if(mx<(min(h[i],h[j])*(j-i)))
            {
                mx = (min(h[i],h[j])*(j-i));
            }
            if(h[i]<h[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return mx;
    }
};