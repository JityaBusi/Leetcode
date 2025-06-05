class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        vector<int>v(nums.size());
        int c=0;
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            v[i]=v[i-1]+nums[i];
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                c++;
            }
        }
        return c;
        
    }
};