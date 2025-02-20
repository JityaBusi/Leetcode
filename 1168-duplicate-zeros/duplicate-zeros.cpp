class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int s=0,n=arr.size();
        int i=0;
        vector<int>v;
        while(s<n)
        {
            if(arr[i]!=0)
            {
                v.push_back(arr[i]);
                s++;
                i++;
            }
            else
            {
                v.push_back(arr[i]);
                v.push_back(0);
                i++;
                s+=2;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=v[i];
        }
    }
};