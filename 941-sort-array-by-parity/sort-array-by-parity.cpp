class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>e;
        vector<int>o;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                e.push_back(nums[i]);
            }
            else
            {
                o.push_back(nums[i]);
            }
        }
        for(int i=0;i<e.size();i++)
        {
            v.push_back(e[i]);
        }
        for(int i=0;i<o.size();i++)
        {
            v.push_back(o[i]);
        }
        return v;
        
    }
};