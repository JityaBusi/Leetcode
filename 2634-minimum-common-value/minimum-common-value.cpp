class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,a=-1;
        int m=nums1.size(),n=nums2.size();
        while(i<m && j<n)
        {
            if(nums1[i] == nums2[j])
            {
                a=nums1[i];
                return a;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return a;
    }
};