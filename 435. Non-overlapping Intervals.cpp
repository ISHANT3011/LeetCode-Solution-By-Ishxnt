///IMP -- The commented code can also give you the vector<vector<int>> i, that will be formed after removing the elements





// struct Interval
//     {
//         int start,end;
//     };
// bool mycomp(Interval a,Interval b)
//     {
//         return a.start<b.start;
//     }

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& i) {
        sort(i.begin(), i.end());
        int j = 1;
        int c = 0;
        while(j<i.size()){
            if(i[j][0]<i[j-1][1]){
                i[j][1] = min(i[j-1][1], i[j][1]);
                c++;
            }
            j++;
        }
        return c;
//         int n = i.size();
//         vector<Interval> arr(n);
//         for(int j=0;j<n;j++)
//         {
//             arr[j].start = i[j][0];
//             arr[j].end = i[j][1];
//         }
//         if(n<=1)
//         {
//             return 0;
//         }
//         sort(arr.begin(),arr.end(),mycomp);
//         int index = 0;
//         for(int j=1;j<n;j++)
//         {
            
//             if(arr[index].end > arr[j].start )
//             {
//                 arr[index].end = min(arr[j].end,arr[index].end);
//                 arr[index].start = max(arr[index].start,arr[j].start);
//             }
//             else if(arr[index].end<=arr[j].start)
//             {
//                 index++;
//                 arr[index] = arr[j];
//             }
//         }

//         i.clear();
        
//         for(int j=0;j<=index;j++)
//         {
//             vector<int> curr;
//             curr.push_back(arr[j].start);
//             curr.push_back(arr[j].end);
//             i.push_back(curr);
//         }
//         int ans = n-index-1;
//         return ans;
    }
};