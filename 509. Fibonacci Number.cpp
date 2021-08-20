class Solution {
public:
    int fib(int n) {
        
        int a = 0;
        int b =1;
        if(n==0)
        {
            return 0;
        }
        n--;
        if(n==0)
        {
            return 1;
        }
        while(n--)
        {
            int temp = a;
            a=b;
            b=b+temp;
        }
        return b;
    }
};