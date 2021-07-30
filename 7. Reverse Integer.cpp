class Solution {
public:
    int reverse(int x) {
        int f =0;
        if(x==-2147483648)
        {
            return 0;
        }
        
        if(x<0)
        {
            x*=-1;
            f=1;
        }
        string s = to_string(x);
        int l =0;
        int r =s.size()-1;
        while(l<r)
        {
            char temp = s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;
        }
        int n = s.size()-1;
        long long int y = 0;
        int i =0;
        while(n>=0)
        {
            int  k = s[i] - 48;
            y += k*pow(10,n);
            i++;
            n--;
        }
        if(f)
        {
            y*=(-1);
        }
        if(y<=pow(2,31)-1 && y>= -1*pow(2,31))
        {
            return y;
        }
        return 0;
        
    }
};