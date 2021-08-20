int row = ar.size();
int col = ar[0].size();
int i=0;
vector<int> ans;
while(row--)
{
    string st = "";
    int l = stoi(arr[i][0]);
    int r = stoi(arr[i][1]);
    string s = arr[i][2];
    int num = r - l;
    int start = l%n;
    for(int j=start;j<n;j++)
    {
        st += DNA[i];
    }
    for(int j=0;j<start;j++)
    {
        st += DNA[j];
    }
    int repeat = diff/n;
    repeat++;
    string str = "";
    for(int j=0;j<repeat;j++)
    {
        str += st;
    }
    int ans_temp = 0;
    for(int j=0;j<diff;j++)
    {
        if(str[j]==s[0])
        {
            int s_size=s.size();
            int temp = j;
            int c =0;
            for(int k =0;k<s_size;k++)
            {
                if(s[k]==str[temp])
                {
                    c++;
                }
            }
            if(c==s_size)
            {
                ans_temp++;
            }
        }
    }
    ans.push_back(ans_temp);
    i++;
}
