class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<0) return false;
        
        for(int i=0; i<= n; i++)
        {
            long long x = 1LL*pow(2,i);
            if(x == 1LL*n)return true;
            if(x> 1LL*n)return false;
        }
        
        return true;
    }
};