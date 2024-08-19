class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int c=0;
        for(int i=0;i<batteryPercentages.size();i++)
        {
             if(batteryPercentages[i]>0)
            {
                c++;
                for(int j=i+1;j<batteryPercentages.size();j++)
                {
                    if(batteryPercentages[j]!=0)
                    {
                        batteryPercentages[j]-=1;
                    }
                }
            }
            
        }
        return c;
    }
};