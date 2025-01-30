class Solution {
public:
int fun(vector<int>&n,int k,int st)
{
    if(n.size()==1)
    {
        return n[0];
    }
    int ind=(st+(k-1)) % n.size();
    n.erase(n.begin()+ind);
    return fun(n,k,ind); 
}
    int findTheWinner(int n, int k) {
        vector<int> a;
        for(int i=1;i<=n;i++)
        {
            a.push_back(i);
        }
        int res=fun(a,k,0);
        return res;
    }
};