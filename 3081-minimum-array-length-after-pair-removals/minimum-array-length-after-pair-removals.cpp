class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int i=0,j=nums.size()/2;
        int c=0;
        while(i<nums.size()/2 && j<nums.size())
        {
            if(nums[i]<nums[j])
            {
                i++;
                j++;
                c+=2;
            }
            else
            {
                j++;
            }
        }
        return nums.size()-c;
        
        
    }
};