class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        string x="";
        while(i<s.length() && j<t.length())
        {
            if(s[i]==t[j])
            {
                x+=s[i];
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return (s==x)?true:false;
        
    }
};