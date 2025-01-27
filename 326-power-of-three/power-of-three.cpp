class Solution {
public:
    bool yesorno(long long p,int k)
    {
        if(k==1 || p==k) return true;
        if(p>k || k==0) return false;
        return yesorno(p*3,k);
        
    }  
    bool isPowerOfThree(int n) {
        return yesorno(1,n);
        
    }
};