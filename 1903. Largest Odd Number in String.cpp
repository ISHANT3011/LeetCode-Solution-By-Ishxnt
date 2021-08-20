class Solution {
public:
    string largestOddNumber(string num) {
        int i;
        for( i = num.size()-1;i>=0;i--)
        {
            if(num[i]%2)
            {
                break;
            }
        }
        if(i==-1)
        {
            return "";
        }
        int j =0;
        string s = "";
        while(j<=i)
        {
            s+=num[j];
            j++;
        }
        return s;
    }
};