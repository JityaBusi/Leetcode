class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<string>s;
        vector<int>c;
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            s.push_back(to_string(nums[i]));
            c.push_back(s[i].length());
            if(c[i]%2==0)
            {
                x+=1;
            }
        }

        return x;
        
    }
};