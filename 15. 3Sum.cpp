/// IMP - Commented coee is also correct but having TLE on the last test case;



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        
        if(n==0)
        {
            vector<vector<int>> r;
            return r;
        }
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]>0) break;
            int sec = i +1;
            int third = n-1;
            while(sec<third)
            {
                int sum = nums[i]+nums[sec]+nums[third];
                if(sum==0)
                {
                    vector<int> curr{nums[i],nums[sec],nums[third]};
                    ans.insert(curr);
                    while(sec<third && nums[sec+1]==nums[sec]) sec++;
                    while(sec<third && nums[third-1]==nums[third]) third--;
                    third--;
                    sec++;
                }
                else if(sum>0)
                {
                    third--;
                }
                else
                {
                    sec++;
                }
            }
        }
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
//         unordered_map<int,int> s;
//         int t = 0;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n;i++)
//         {
//             s.insert({nums[i],i});
//             t+=nums[i];
//         }
//         set<vector<int>> ans;
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(i!=j)
//                 {
//                     int sum = nums[i]+nums[j];
//                     sum *=(-1);
//                     if(s.find(sum)!=s.end())
//                     {
//                         auto it = s.find(sum);
//                         if(it->second!=i && it->second!=j)
//                         {
//                             vector<int> curr{nums[i],nums[j],it->first};
//                             sort(curr.begin(),curr.end());
//                             ans.insert(curr);
//                         }
//                     }
//                 }
//             }
//         }
//         vector<vector<int>> res(ans.begin(),ans.end());
        // return res;
    }
};