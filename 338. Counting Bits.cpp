class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> V;
        for(int i = 0;i<=num;i++){
               int x = i;
                int c =0;
                while(x>0){
                    c++;
                    x=x&(x-1);
                }
            V.push_back(c);
        }
        return V;
    }
};
