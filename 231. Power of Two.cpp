class Solution {
public:
    bool isPowerOfTwo(long long n) {
    if(n==0) return false;
     if(n&(n-1)) return false;
        return true;
    }
};
