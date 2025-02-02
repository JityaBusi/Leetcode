class Solution {
public:
int recurse(int n,vector<int>&dp)
{
    if(dp[n]!=0) return dp[n];
    if(n==1||n==2)
    {
        dp[n]=n;
    }
    else
    {
        dp[n]=recurse(n-1,dp)+recurse(n-2,dp);
    }
    return dp[n];
}
    int climbStairs(int n) {
        vector<int>dp(n+1,0);
        int res=recurse(n,dp);
        return res;
        
    }
};