class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>v;
        int s=original.size();
        if(s==(m*n))
        {
            int k=0;
            vector<vector<int>>ans;
            for(int i=0;i<m;i++)
            {
                vector<int>dummy;
                for(int j=0;j<n;j++)
                {
                    dummy.push_back(original[k]);
                    k++;
                }
                ans.push_back(dummy);
            }
            return ans;
        }
        return v;
    }
};