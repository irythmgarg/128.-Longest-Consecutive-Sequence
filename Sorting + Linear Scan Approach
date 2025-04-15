// Problem: Longest Consecutive Sequence
// Approach: Sorting + Linear Scan
// Author: [Your Name or GitHub handle] 🧠

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // If the array is empty, return 0
        if (nums.empty()) return 0;

        // Sort the array to bring consecutive numbers together
        sort(nums.begin(), nums.end());

        int ans = 1; // To store the final answer (maximum length found)
        int len = 1; // Current consecutive sequence length

        // Traverse the sorted array
        for (int i = 1; i < nums.size(); i++) {
            // Skip duplicate elements
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            // If current number is consecutive to the previous one
            else if (nums[i] == nums[i - 1] + 1) {
                len++; // Extend the current streak
            }
            // Reset the streak if the sequence is broken
            else {
                len = 1;
            }
            // Update the maximum streak found
            ans = max(ans, len);
        }

        return ans;
    }
};
