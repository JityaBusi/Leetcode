class Solution {
public:
    bool yesorno(long long p,int n)
    {
        if(n==1 || p==n) return true;
        if(p>n || n==0) return false;
        return yesorno(p*4,n);
    }
    bool isPowerOfFour(int n) {
        return yesorno(1,n);
    }
};