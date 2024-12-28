class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        map<int,vector<int>>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            for(int j=0;j<it->second.size();j++)
            {
                for(int l=j+1;l<it->second.size();l++)
                {
                    if(abs(it->second[j]-it->second[l])<=k)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};