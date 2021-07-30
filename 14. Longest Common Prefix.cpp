class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        string str1 = strs[0];
        string str2 = "";
        for(int i=1;i<strs.size();i++)
        {
            int j =0;
            while(j <strs[i].size())
            {
                
                if(str1[j]==strs[i][j]){
                    str2 = str2 + str1[j];
                }
                else
                {
                    break;
                }
                j++;
            }
            if(i!=strs.size()-1){
            str1.clear();
            str1 = str2;
            str2.clear();}
        }
        return str2;
    }
};