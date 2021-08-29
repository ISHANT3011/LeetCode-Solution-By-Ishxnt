class Solution {
public:
    bool isPerfectSquare(int num) {
        int n = sqrt(num);
        n = n*n;
        if(num == n)
        {
            return true;
        }
        return false;
    }
};