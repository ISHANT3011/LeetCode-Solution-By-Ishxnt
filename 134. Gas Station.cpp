class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // int n = gas.size();
        // int sum =0;
        // int j;
        // for(int i=0;i<n;i++)
        // {
        //     sum = gas[i];
        //     for(j=i+1;j<=n+i;j++)
        //     {
        //         sum -= cost[(j-1)%n];
        //         if(sum<0)
        //         {
        //             break;
        //         }
        //         sum += gas[j%n];
        //     }
        //     if(sum>=0)
        //     {
        //         return i;
        //     }
        // }
        // return -1;
        int total = 0;
        int sum = 0;
        int start = 0;
        for(int i=0;i<gas.size();i++){
            total += gas[i] - cost[i];
            sum += gas[i] - cost[i];
            if(sum < 0){
                start = i + 1;
                sum = 0;
            }
        }
        return total >=0 ? start : -1;
    }
};