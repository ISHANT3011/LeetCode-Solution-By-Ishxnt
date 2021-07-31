class Solution {
public:
    int addDigits(int num) {
        int x;
        while(1)
        {
            x = 0;
            while(num>0)
            {
                x+=num%10;
                num/=10;
            }
            if(x/10==0)
            {
                break;
            }
            else
            {
                num = x;
            }
        }
        return x;
    }
};