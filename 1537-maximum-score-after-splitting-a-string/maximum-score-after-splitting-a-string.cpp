class Solution {
public:
    int maxScore(string s) {
        int zc=0,oc=0,ans=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                oc++;
            }
        }
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')
            {
                zc++;
            }
            else
            {
                oc--;
            }
            ans=max(ans,oc+zc);
        }
    return ans; 
    }  
};