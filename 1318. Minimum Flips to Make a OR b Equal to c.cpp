class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0;
        for(int i = 0;i<32;i++){
            int x = c&1;
            if(x){
                if(!((a&1)||(b&1))) count++;
            }
            else{
                if((a&1)&&(b&1)) count+=2;
                else if((a&1)||(b&1)) count++;
            }
            a>>=1,b>>=1,c>>=1;
        }
        return count;
    }
};
