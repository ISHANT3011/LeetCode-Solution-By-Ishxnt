class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int n=s.size();
        int j=s.size();
        while(i<j)
        {
            while(i<n && i<j){if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' || s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){break;}i++;}
            while(j>=0 && i<j){if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u' || s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'){break;}j--;}
            char temp = s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        return s;
    }
};