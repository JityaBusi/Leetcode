class Solution {
public:
    int getLucky(string s, int k) {
        vector<char>alpha={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string digit="";
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<alpha.size();j++)
            {
                if(s[i]==alpha[j])
                {
                    digit+=to_string(j+1);
                }
            }
        }
        long long i=0,sum=0;
        while(i<k)
        {
            for(int j=0;j<digit.size();j++)
            {
                sum+=digit[j]-48;
            }
            digit=to_string(sum);
            i++;
            if(i<k)
            sum=0;
        }
    return sum;   
    }
};