class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int c=0;
        for(int i=0;i<points.size()-1;i++)
        {
            while(points[i][0]!=points[i+1][0] || points[i][1]!=points[i+1][1]){
                if(points[i][0]!=points[i+1][0] && points[i][1]!=points[i+1][1])
                {
                    if(points[i][0]<points[i+1][0])
                    {
                        points[i][0]++;
                    }
                    else
                    {
                        points[i][0]--;
                    }
                    if(points[i][1]<points[i+1][1])
                    {
                        points[i][1]++;
                    }
                    else
                    {
                        points[i][1]--;
                    }
                    c++;
                }
                else if(points[i][0]!=points[i+1][0])
                {
                    if(points[i][0]<points[i+1][0] )
                    {
                        points[i][0]++;
                    }
                    else if(points[i][0]>points[i+1][0] ){
                        points[i][0]--;
                    }
                    c++;
                }
                else{
                    if(points[i][1]<points[i+1][1] )
                    {
                        points[i][1]++;
                    }
                    else if(points[i][1]>points[i+1][1] ){
                        points[i][1]--;
                    }
                    c++;
                }

            }
        }
        return c;
    }
};