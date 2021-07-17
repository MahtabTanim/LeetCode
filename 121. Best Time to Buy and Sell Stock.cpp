class Solution {
  public:
    int maxProfit(vector < int > & prices) {
      int n = prices.size() - 1;
      vector < int > nums(n);
      for (int i = 0; i < n; i++) {
        nums[i] = prices[i + 1] - prices[i];
      }
      int res = 0, sum = 0;

      for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        res = max(sum, res);
        if (sum < 0) sum = 0;

      }

      return res;
    }
};
