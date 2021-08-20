class Solution {
public:
    string addStrings(string a, string b) {
        int s = 0;
        string result = "";
            int i = a.size() - 1, j = b.size() - 1;
            while (i >= 0 || j >= 0 || s == 1)
            {
                s += ((i >= 0)? a[i] - '0': 0) + ((j >= 0)? b[j] - '0': 0);

                result += char(s % 10 + '0');

                s /= 10;

                i--; j--;
            }
            reverse(result.begin(),result.end());
            return result;
    }
};