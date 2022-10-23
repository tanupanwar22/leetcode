class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      const int n = size(nums);
        vector<bool> seen(n + 1);
        int dup = -1;
        for (int num : nums) {
            if (seen[num]) dup = num;
            seen[num] = true;
        }
        int miss = -1;
        for (int i = 1; i <= n; ++i) {
            if (!seen[i]) {
                miss = i;
                break;
            }
        }
        return {dup, miss};
    }
};