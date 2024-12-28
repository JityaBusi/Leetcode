class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        vector<int>x;
        for(int i=1;i<=nums.size();i++)
        {
            v.push_back(i);
        }
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            mp[v[i]]++;
        }
        map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==1)
            {
                x.push_back(it->first);
            }
        }
        return x;
    }
};