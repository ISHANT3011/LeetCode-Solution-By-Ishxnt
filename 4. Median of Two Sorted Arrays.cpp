class Solution {
public:
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
int m=nums2.size();
        
int c=m+n;
int s=m+n;
        
int arr[c];
while(n>0&&m>0)
{
if(nums1[n-1]>nums2[m-1])
{
arr[c-1]=nums1[n-1];
c--;
n--;
}
else
{
arr[c-1]=nums2[m-1];
c--;
m--;
}
}
while(n>0)
{
arr[c-1]=nums1[n-1];
n--;
c--;
}
while(m>0)
{
arr[c-1]=nums2[m-1];
m--;
c--;
}
if(s%2!=0)
{
return (double)arr[s/2];
}
else
{
double t=(arr[(s/2)-1]+arr[s/2])/2.0;
return t;
}
}
};