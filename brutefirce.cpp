class Solution {
   public:
    // brute force 
    // find all sub arrays
    // calculate the sum if sum is equal to k check for lengths 
    
    int longestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        int longest = 0;

        for (int start = 0; start < n; start++) {
            for (int end = start; end < n; end++) {
                int sum = 0;
                for (int k = start; k <= end; k++) sum = sum + nums[k];

                if (sum == k) longest = max(longest, end - start + 1);
            }
        }
        return longest;
    }
};
