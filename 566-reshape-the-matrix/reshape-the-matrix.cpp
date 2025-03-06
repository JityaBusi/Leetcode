class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int s=mat.size()*mat[0].size();
        if(s==(r*c))
        {
            vector<int>v;
            for(int i=0;i<mat.size();i++)
            {
                for(int j=0;j<mat[0].size();j++)
                {
                    v.push_back(mat[i][j]);
                }
            }
            int k=0;
            vector<vector<int>>ans;
            for(int i=0;i<r;i++)
            {
                vector<int>dummy;
                for(int j=0;j<c;j++)
                {
                    dummy.push_back(v[k]);
                    k++;
                }
                ans.push_back(dummy);
            }
            return ans;
        }
        return mat;
    }
};