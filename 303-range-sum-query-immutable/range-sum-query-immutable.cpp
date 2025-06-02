class NumArray {
    private:
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        prefix.push_back(nums[0]);
        cout<<prefix[0]<<" ";
        for(int j=1;j<nums.size();j++)
        {
            prefix.push_back(prefix[j-1]+nums[j]);
            cout<<prefix[j]<<" ";
        }
        
        // return numArray;
        
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return prefix[right];
        }
        return prefix[right]-prefix[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */