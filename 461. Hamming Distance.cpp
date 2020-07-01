class Solution {
public:
    int hammingDistance(int x, int y) {
     int r = 0;
    for(int i = 0;i<32;i++){
        
        bool a,b;
        
        a = x&(1<<i) ;
        
        b = y&(1<<i) ;
        
        if(a!=b) r++;
    }    
    return r;
    }
};
