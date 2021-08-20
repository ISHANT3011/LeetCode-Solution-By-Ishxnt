struct Interval
    {
        int start,end;
    };
bool mycomp(Interval a,Interval b)
    {
        return a.start<b.start;
    }

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        int n = i.size();
        vector<Interval> arr(n);
        for(int j=0;j<n;j++)
        {
            arr[j].start = i[j][0];
            arr[j].end = i[j][1];
        }
        if(n<=1)
        {
            return i;
        }
        sort(arr.begin(),arr.end(),mycomp);
        int index = 0;
        for(int j=1;j<n;j++)
        {
            
            if(arr[index].end >= arr[j].start )
            {
                arr[index].end = max(arr[j].end,arr[index].end);
                arr[index].start = min(arr[index].start,arr[j].start);
            }
            else if(arr[index].end<arr[j].start)
            {
                index++;
                arr[index] = arr[j];
            }
        }
        i.clear();
        
        for(int j=0;j<=index;j++)
        {
            vector<int> curr;
            curr.push_back(arr[j].start);
            curr.push_back(arr[j].end);
            i.push_back(curr);
        }
        return i;
    }
};