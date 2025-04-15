// Problem: Longest Consecutive Sequence
// Approach: HashSet (Unordered Set) – O(n) Time Complexity
// Author: [Ridham Garg or irythmgarg] ⚡

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Edge case: if array is empty, return 0
        if (nums.empty()) return 0;

        // Use a set to store unique elements and allow O(1) lookup
        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 0; // Stores the length of the longest sequence

        // Traverse each number in the set
        for (int a : st) {
            // Only start counting if it's the beginning of a sequence
            if (st.find(a - 1) == st.end()) {
                int count = 1;       // Length of current sequence
                int current = a + 1; // Start checking next consecutive numbers

                // Keep incrementing while consecutive numbers are found
                while (st.find(current) != st.end()) {
                    count++;
                    current++;
                }

                // Update the longest streak found so far
                ans = max(ans, count);
            }
        }

        return ans;
    }
};
