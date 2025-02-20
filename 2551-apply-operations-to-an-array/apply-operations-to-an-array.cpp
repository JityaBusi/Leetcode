class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[c++]=nums[i];
            }
        }
        while(c<nums.size())
        {
            nums[c++]=0;
        }
        return nums;
    }
};