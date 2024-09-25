class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int s=nums1.size();
        double e; 
        if(s%2==0)
        {
            e=(nums1[s/2-1]+nums1[s/2])/2.0;
        }
        else
        {
            e=nums1[s/2];
        }
        return e;
    }
};