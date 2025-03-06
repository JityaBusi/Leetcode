class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        map<int,int>mp;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                mp[matrix[i][j]]++;
            }
            for(int k=1;k<=matrix.size();k++)
            {
                if(mp[k]!=(i+1))
                {
                    return false;
                }
            }
        }
        map<int,int>mp2;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                mp2[matrix[j][i]]++;
            }
            for(int k=1;k<=matrix.size();k++)
            {
                if(mp2[k]!=(i+1))
                {
                    return false;
                }
            }
        }
        return true;
    }
};