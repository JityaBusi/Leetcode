class Solution {
public:
    int pivotInteger(int n) {
        vector<int> p(n + 1, 0); 

        for (int i = 1; i <= n; ++i) {
            p[i] = p[i - 1] + i; 
        }

        for (int i = 1; i <= n; ++i) {
            int ls = p[i];        
            int rs = p[n] - p[i - 1]; 
            if (ls == rs) {
                return i;
            }
        }

        return -1;
    }
};
