class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,j=s.size()-1;
        char x;
        while(i<j)
        {
            x=s[i];
            s[i]=s[j];
            s[j]=x;
            i++;
            j--;
        }
        // reverse(s.begin(),s.end());

        
    }
};