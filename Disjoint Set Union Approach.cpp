// Problem: Longest Consecutive Sequence
// Approach: Disjoint Set Union (Union by Size with Path Compression)
// Time Complexity: O(n * α(n)) ~ O(n) where α(n) is inverse Ackermann
// Author: [Ridham Garg or irythmgarg] 🔗

class Solution {
public:
    vector<int> parent; // To store parent of each node
    vector<int> size;   // To store size of each disjoint set

    // Find with path compression
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]); // Path compression optimization
        return parent[x];
    }

    // Union two sets by size (attach smaller tree under larger one)
    void unionBySize(int a, int b) {
        int rootA = find(a);
        int rootB = find(b);

        if (rootA == rootB) return; // Already in the same set

        if (size[rootA] < size[rootB]) {
            parent[rootA] = rootB;
            size[rootB] += size[rootA];
        } else {
            parent[rootB] = rootA;
            size[rootA] += size[rootB];
        }
    }

    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        // Initialize DSU structures
        parent.resize(n);
        size.resize(n, 1);
        for (int i = 0; i < n; ++i)
            parent[i] = i;

        unordered_map<int, int> numToIndex; // Maps number to its index in the array

        // Build the union of consecutive numbers
        for (int i = 0; i < n; ++i) {
            if (numToIndex.find(nums[i]) != numToIndex.end())
                continue; // Skip duplicates

            numToIndex[nums[i]] = i;

            // If previous number exists, union with it
            if (numToIndex.find(nums[i] - 1) != numToIndex.end()) {
                unionBySize(i, numToIndex[nums[i] - 1]);
            }

            // If next number exists, union with it
            if (numToIndex.find(nums[i] + 1) != numToIndex.end()) {
                unionBySize(i, numToIndex[nums[i] + 1]);
            }
        }

        // Find the size of the largest set
        int maxSize = 1;
        for (int i = 0; i < n; ++i) {
            maxSize = max(maxSize, size[find(i)]);
        }

        return maxSize;
    }
};
