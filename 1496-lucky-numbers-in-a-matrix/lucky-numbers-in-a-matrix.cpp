class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>v;
        for(int i=0;i<matrix.size();i++)
        {
            int m=matrix[i][0],ind=0;
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]<m)
                {
                    m=matrix[i][j];
                    ind=j;
                }
            }
            int c=0;
            for(int k=0;k<matrix.size();k++)
            {
                if(matrix[k][ind]>m)
                {
                    c++;
                    break;
                }
            }
            if(c==0)
            {
                v.push_back(m);
                return v;
            }
        }
        return v;
    }
};