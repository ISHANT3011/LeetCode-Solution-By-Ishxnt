class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int odd_c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==1)
            {
                odd_c++;
            }
            else
            {
                odd_c=0;
            }
            if(odd_c==3)
            {
                return true;
            }
        }
        return false;
    }
};