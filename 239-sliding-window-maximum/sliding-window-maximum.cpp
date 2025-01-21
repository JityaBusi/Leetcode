class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        multiset<long long> lo, hi;
        for (int i = 0; i < (int)nums.size(); i++) {
             lo.insert(nums[i]);
            // Remove the element that goes out of the window
            if (i >= k) {
                long long out = nums[i - k];
                auto it = lo.find(out);
                lo.erase(it);
            }
            if (i >= k - 1) {
                ans.push_back(*lo.rbegin());
            }
        }
        return ans;
        
    }
};