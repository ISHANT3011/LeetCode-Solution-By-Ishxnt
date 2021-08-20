// bool mycomp(vector<pair<string,int> vec1,vector<pair<string,int> vec2)
// {
//     return vec1.second<vec2.second;
// }
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n =s.size();
        vector<pair<int,char>> vec(n);
        for(int i = 0;i<n;i++)
        {
            vec[i].first=indices[i];
            vec[i].second = s[i];
        }
        sort(vec.begin(),vec.end());
        string str = "";
        for(int i=0;i<vec.size();i++)
        {
            str += vec[i].second;
        }
        return str;
    }
};