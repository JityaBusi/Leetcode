class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string s=paths[0][1];
        for(int i=0;i<paths.size();i++)
        {
            for(int j=0;j<paths.size();j++){
            if(s==paths[j][0])
            {
                s=paths[j][1];
            }
            }
        }return s;
        
    }
};