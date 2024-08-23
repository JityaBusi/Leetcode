class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        vector<int>ans;
        int c=0,d=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                v.push_back(grid[i][j]);
                c+=grid[i][j];
            }
        }
        for(int i=0;i<v.size();i++)
        {
            int r=count(v.begin(),v.end(),v[i]);
            if(r==2)
            {
                ans.push_back(v[i]);
                c-=v[i];
                break;
            }
        }
        for(int i=1;i<=v.size();i++)
        {
            d+=i;
        }
        ans.push_back(d-c);
        
        
        return ans;
        
    }
};