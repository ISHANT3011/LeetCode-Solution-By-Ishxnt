int n = wall.size();
int mx = INT_MIN;
for(int i=0;i<n;i++)
{
    char temp = wall[i];
    wall[i] = '0';
    int temp2 =1;
    for(int j=0;j<n-1;j++)
    {
        
        if(wall[j]==wall[j+1] || wall[j]=='0'||wall[j+1]=='0')
        {
            temp2++;
            if(temp2>mx)
            {
                mx = temp2;
            }
        }
        else
        {
            temp2=0;
        }
        
    }
    wall[i]=temp;
}
return mx;