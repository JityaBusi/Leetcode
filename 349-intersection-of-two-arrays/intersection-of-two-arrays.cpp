class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        map<int,int>m;
        for(set<int>::iterator it=s1.begin();it!=s1.end();it++)
        {
            m[*it]++;
        }
        for(set<int>::iterator it=s2.begin();it!=s2.end();it++)
        {
            m[*it]++;
        }
        vector<int>v;
        map<int,int>::iterator i;
        for(i=m.begin();i!=m.end();i++)
        {
            if(i->second==2)
            {
                v.push_back(i->first);
            }
        }
    return v;
    }
    
};