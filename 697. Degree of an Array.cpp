class Solution {
    public:
        map < int, int > M;
    int findDegree(vector < int > & nums, int x, int y) {

        int Max = -1;

        for (int i = x; i <= y; i++) {
            M[nums[i]]++;
            Max = max(Max, M[nums[i]]);
        }
        return Max;
    }

    int findShortestSubArray(vector < int > & nums) {
        int deg = findDegree(nums, 0, nums.size() - 1), ans = nums.size();
        vector < pair < int, int > > Mp(50000, {
            -1,
            -1
        });

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            if (M[a] == deg) {
                if (Mp[a].first == -1) Mp[a].first = i;
                Mp[a].second = i;
            }

        }
        vector < int > v;

        for (int i = 0; i < 50000; i++) {
            if (M[i] == deg) {
                ans = min((Mp[i].second - Mp[i].first + 1), ans);
            }
        }
        return ans;
    }

};
