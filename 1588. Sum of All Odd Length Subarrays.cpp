class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int m = 0;
        int c = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                c++;
                m+=arr[j];
                if(c%2)
                {
                s+=m;
                }
            }
            c=0;
            m=0;
        }
        return s;
    }
};