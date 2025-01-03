class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long c=0,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            c+=nums[i];
        }
        long long x=0,y=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            x+=nums[i];
            y=c-x;
            if(x>=y)
            {
                cnt++;
            }
        }
        return cnt;
        
    }
};