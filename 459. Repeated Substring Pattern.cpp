class Solution {
public:
    bool repeatedSubstringPattern(string s) {
     for(int len = 1; len<s.length(); len++){
            if(len>(s.length()/2)) break;
            if(s.length()%len) continue;
            int i;
            string str = s.substr(0,len);
            for(i=len; i<s.length(); i+=len){
                string temp = s.substr(i,len);
                if(temp!=str) break;
            }
            if(i==s.length()) return true;
        }
        return false;
    }
};