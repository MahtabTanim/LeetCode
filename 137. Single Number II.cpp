class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();
        int count[32]={0};
        for(int k = 0;k<n;k++){
           
            int a = nums[k];
            
            for(int i = 0;i<32;i++){
                
                if((a&(1<<i))) count[i]++;
                
            }
        }
        int sum = 0;
        for(int i = 0;i<32;i++){
            if(count[i]%3==1){
                sum += (1<<i);
            }
        }
        return sum;
    }
};
