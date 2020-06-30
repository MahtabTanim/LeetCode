class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sum = 0,n = nums.size();
        for(int i = 0;i<32;i++){
            int c=0;
            for(int j =0;j<n;j++){
                    if((1<<i)&(nums[j]))c++;
                }
            if(c>(n>>1)) sum+=(1<<i);
        }
        return sum;
    }
};
