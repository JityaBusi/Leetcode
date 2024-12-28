class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>mp;
        char r;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            mp[t[i]]++;
        }
        map<char,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second%2==1)
            {
                r=it->first;
            }
        }
        return r;
    }
};