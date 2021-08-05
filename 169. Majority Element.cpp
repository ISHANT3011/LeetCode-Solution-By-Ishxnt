class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0, candidate=0;
        for(auto x: nums){
            if(cnt==0) candidate=x;
            if(x==candidate) cnt++;
            else cnt--;
        }
        return candidate;
    }
};