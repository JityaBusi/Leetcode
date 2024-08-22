class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>v;
        int i=0;
        while(i<arr.size())
        {
            int c=0;
            for(int j=0;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                }
            }
            int cnt=count(v.begin(),v.end(),c);
            if(cnt>0)
            {
                return false;
            }
            v.push_back(c);
            i+=c;
        }
        return true;
        
    }
};