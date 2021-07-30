class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.size();
    int len2 = num2.size();
    if (num1 == "0" || num2 == "0") return "0";
    vector<int> ans(len1 + len2, 0);
    int x = 0;
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int d1 = num1[i] - '0';
        int y = 0;      
        for (int j=len2-1; j>=0; j--)
        {
            int d2 = num2[j] - '0';
            int prod = d1*d2 + ans[x+y] + carry;
            ans[x+y] = prod % 10;
            carry = prod/10;
            y++;
        }
        if (carry > 0)
            ans[x+y] += carry;
        x++;
    }
    int i = ans.size() - 1;
    while (i>=0 && ans[i] == 0)
         i--;
    string res = "";
    while (i >= 0)
    {
        res += (ans[i]+'0');
        i--;
    }
 
    return res;
        
    }
};