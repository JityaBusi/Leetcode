class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c=0;
        for(int i=1;i<nums.size();i++)
        {
            int d=(nums[i]-nums[i-1]);
            if(d==0)
            {
                nums[i]+=1;
                c+=1;
            }
            else if(d<0)
            {
                c+=abs(nums[i-1]+1-nums[i]);
                cout<<c;
                nums[i]+=abs(nums[i-1]+1-nums[i]);
            }
        }
        return c;
    }
};