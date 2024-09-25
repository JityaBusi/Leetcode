class Solution {
public:
    bool isHappy(int n) {
        int r,sum=0;
        while(1)
        {
            r=n%10;
            sum+=r*r;
            n=n/10;
            if(n==0)
            {
                n=sum;
                sum=0;
                if(n<=9)
                {
                    break;
                }
            }
        }
        if(n==1 || n==7)
        {
            return true;
        }
        return false;
    }
};