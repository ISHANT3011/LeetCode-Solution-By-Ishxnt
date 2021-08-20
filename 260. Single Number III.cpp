//Tricky question Alert


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()<=2){
return nums;
}

    long long int xor1= 0;
    for(auto i :nums){
        xor1^=i;
    }
    int rightMostSetBit= xor1 & ~(xor1-1);
    
    
    int x=0;
    int y=0;
    for(auto i: nums){
        if((i&rightMostSetBit)==0){
            x^=i;
        }
        else{
            y^=i;
        }
    }
    vector<int> res;
    if(x<y){
        res.push_back(x);
         res.push_back(y);
    }
    else{
          res.push_back(y);
         res.push_back(x);
    }
    return res;
    }
};