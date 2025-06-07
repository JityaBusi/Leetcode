class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                int siz=j-i+1;
                sum+=nums[j];
                if(siz<=r && siz>=l && sum>0)
                {
                    res=min(res,sum);
                }
                if(siz>r)
                {
                    break;
                }
            }
        }
        if(res==INT_MAX) return -1;
        return res;
    }
};
