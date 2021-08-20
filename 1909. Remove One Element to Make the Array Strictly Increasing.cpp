class Solution {
public:
    bool canBeIncreasing(vector<int>& a) {
//         int n = a.size();
//         vector<int> arr;
//         arr = a;
//         int c =0;
//         for(int i=0;i<n;i++)
//         {
//             c=0;
//             a.erase(a.begin() + i);
//             for(int j=1;j<n-1;j++)
//             {
             
//                     if(a[j-1]<a[j])
//                     {
//                         c++;
//                     }
//                     else
//                     {
//                         break;
//                     }
                
//             }
//             a=arr;
//             if(c==n-2)
//             {
//                 return true;
//             }
//         }
//         return false;
        int cnt=0;
        for(int i=1;i<a.size();i++){
            if(a[i]<=a[i-1]){
                if(cnt==1)
                    return false;
                cnt++;
                if(i>1 && a[i]<=a[i-2])
                    a[i]=a[i-1];
            }
        }
        return true;
    }
};