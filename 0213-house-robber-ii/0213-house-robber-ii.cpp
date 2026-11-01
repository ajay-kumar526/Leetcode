class Solution {
private:
    // Returns the cached best amount from start through index.
    int solve(int index, int start, vector<int>& nums, vector<int>& dp) {
        // No house remains inside the active range.
        if (index < start) {
            return 0;
        }
 
        // Only the starting house remains inside the active range.
        if (index == start) {
            return nums[start];
        }
 
        // A completed state is reused to avoid repeated recursion.
        if (dp[index] != -1) {
            return dp[index];
        }
 
        // Skipping keeps the previous house available.
        int skip = solve(index - 1, start, nums, dp);
 
        // Taking earns the current amount.
        // A two-step jump avoids the adjacent house.
        int take = nums[index] + solve(index - 2, start, nums, dp);
 
        // The better valid choice is saved for future calls.
        dp[index] = max(skip, take);
        return dp[index];
    }
 
    // Solves one range after the circle is split.
    // Chosen endpoints prevent a circular clash.
    int robLinear(int start, int end, vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(end, start, nums, dp);
    }
 
public:
    // Returns the maximum money obtainable from circular houses.
    int rob(vector<int>& nums) {
        int n = nums.size();
 
        // A single house has no circular adjacency conflict.
        if (n == 1) {
            return nums[0];
        }
 
        int excludeLast = robLinear(0, n - 2, nums);
        int excludeFirst = robLinear(1, n - 1, nums);
        return max(excludeLast, excludeFirst);
    }
};