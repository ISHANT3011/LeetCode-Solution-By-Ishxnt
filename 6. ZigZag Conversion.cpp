class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> d(numRows,vector<char>(1001,'0'));
        int k=0,j=0;
        int c = numRows;
        if(c==1)
        {
            return s;
        }
        for(int i=0;i<s.size();i++)
        {
            while(1)
            {
                d[k][j]=s[i];
                k++;
                i++;
                if(i==s.size())
                {
                    break;
                }
                if(k==c)
                {
                    k--;
                    k--;
                    j++;
                    break;
                }
            }
            if(i==s.size())
                {
                    break;
                }
            
            while(1)
            {
                d[k][j]=s[i];
                i++;
                if(i==s.size())
                {
                    break;
                }
                k--;
                j++;
                if(k==-1)
                {
                    k++;
                    k++;
                    i--;j--;
                    break;
                }
            }
            

        }
        string st ="";
        for(int i=0;i<c;i++)
        {
            for(int u=0;u<1000;u++)
            {
                //cout<<d[i][u]<<" ";
                if(d[i][u]!='0')
                {
                    st.push_back(d[i][u]);
                }
            }
            //cout<<endl;
        }
        return st;
    }
};



int n = arr.size();
for(int i =0;i<n;i++)
{
    int temp = arr[i];
    int x =0;
    while(temp>0)
    {
        x+=temp%10;
        temp/=10;
    }
    answer.push_back(x);
}