class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>a;
        sort(nums.begin(),nums.end());
        if(nums[0]==0 && nums[nums.size()-1]==0)
        {
            return {{0,0,0}};
        }
        for(int i=0;i<nums.size();i++)
        {
            
            int j=i+1;
            int k=nums.size()-1;
           while(j<k)
           {
                if((nums[i]+nums[j]+nums[k])==0)
                {
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    sort(v.begin(),v.end());
                    a.insert(v);
                    j++;
                    k--;
                }
                else if((nums[i]+nums[j]+nums[k])<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
           }
        }
        vector<vector<int>>ans;
        for(auto i :a)
        {
            ans.push_back(i);
        }

        return ans;
    }
};