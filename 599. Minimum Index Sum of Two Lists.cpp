class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n  = list1.size();
        int m = list2.size();
        vector<string> ans;
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(list1[i]==list2[j])
                {
                    int sum = i+j;
                    if(sum<mn)
                    {
                        ans.clear();
                        ans.push_back(list1[i]);
                        mn = sum;
                    }
                    else if(sum==mn)
                    {
                        ans.push_back(list1[i]);
                    }
                }
            }
        }
        return ans;
    }
};