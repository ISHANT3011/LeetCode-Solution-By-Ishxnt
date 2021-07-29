class Solution {
public:
    bool isPowerOfThree(int n) {
        long long int i;
if(n < 1) return false;
if(n ==1) return true;
for ( i =1; i<=n; ){

    if(i ==n) return true;
    
    i= i*3;
    
}
return false;

    }
};