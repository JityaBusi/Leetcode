class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>v;
        for(int i=0;i<rectangles.size();i++)
        {
            if(rectangles[i][0]<rectangles[i][1])
            {
                v.push_back(rectangles[i][0]);
            }
            else
            {
                v.push_back(rectangles[i][1]);
            }
            
        }
        sort(v.begin(),v.end());
        // for(int i=0;i<v.size();i++)
        // {
        //     cout<<v[i];
        // }
        int c=count(v.begin(),v.end(),v[v.size()-1]);
        return c;
    }
};