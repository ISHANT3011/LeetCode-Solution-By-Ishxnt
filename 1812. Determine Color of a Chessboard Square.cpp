class Solution {
public:
    bool squareIsWhite(string c) {
        int i = c[0]-'a'+1;
        int j = c[1] - '0';
        if((i+j)%2)
        {
            return true;
        }
        return false;
    }
};