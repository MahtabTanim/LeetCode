class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        int c=0;
        while(n)
        {
            if((n&1)>0) {
                if((n>>1) >0) {
                    return false;
                }
                break;
            }
            n=n>>1;
            c++;
        }
        if(c%2==0) return true;
         return false;
    }
};
