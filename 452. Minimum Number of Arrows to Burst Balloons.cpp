bool compare(vector<int>& a,vector<int> &b)
    {
        return a[0]<b[0];
    }
class Solution {
public:
    
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),compare);
        int ans = 0;
        int end = points[0][1];
        for(int i=1;i<points.size();i++)
        {
            if(end < points[i][0]){
                ans++;
                end=points[i][1];
            } else end=min(end,points[i][1]);
        }
        return ++ans;
    }
};