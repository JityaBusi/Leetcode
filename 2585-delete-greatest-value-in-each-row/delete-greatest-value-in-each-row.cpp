class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        vector<int>v;
        int c=0;
        for(int i=0;i<grid.size();i++)
        {
            sort(grid[i].rbegin(),grid[i].rend());
        }
       
        for(int i=0;i<grid[0].size();i++){
            int res=INT_MIN;
            for(int j=0;j<grid.size();j++){
                res=max(res,grid[j][i]);
            }
            c+=res;
        }
        return c;
    }
};