class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(count(nums.begin(),nums.end(),nums[i])>(nums.size()/2))
            {
                return nums[i];
            }
        }
        return 0;
    }
};