class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        digits[digits.size()-1]++;
        while(digits[n]==10 && n >=0)
        {
            if(n==0 && digits[n]==10)
            {
                digits[n]=0;
                digits.insert(digits.begin(),1);
                break;
            }
            digits[n]=0;
            n--;
            digits[n]++;
            
        }
        
        return digits;
    }
};