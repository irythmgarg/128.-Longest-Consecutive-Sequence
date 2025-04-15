# 128.-Longest-Consecutive-Sequence

🌟 Longest Consecutive Sequence
Problem: LeetCode 128 - Longest Consecutive Sequence
Category: Arrays / Hashing / Union-Find
Difficulty: Medium
Tags: Sorting, HashSet, Disjoint Set Union (DSU), Optimal Solutions

📌 Problem Description
Given an unsorted array of integers, the goal is to find the length of the longest sequence of consecutive elements. The solution should ideally have a time complexity of O(n).

🧪 Example
Input:
nums = [100, 4, 200, 1, 3, 2]
Output:
4
Explanation: The longest consecutive sequence is [1, 2, 3, 4].

🧠 Approaches
🔹 1. Sorting-Based Approach
Idea: Sort the array and iterate through to count consecutive elements.

Time Complexity: O(n log n)

Space Complexity: O(1)

Pros: Simple to implement.

Cons: Does not meet the optimal O(n) requirement due to sorting.

🔹 2. HashSet-Based Approach (Optimal)
Idea: Use a HashSet to identify the start of a sequence, then count its length.

Time Complexity: O(n)

Space Complexity: O(n)

Pros: Efficient and concise. Best practical solution.

Cons: Requires extra space for the set.

🔹 3. Disjoint Set Union (DSU / Union-Find)
Idea: Model the array as nodes in a graph, connect consecutive numbers using union-find.

Time Complexity: O(n * α(n)) (almost linear)

Space Complexity: O(n)

Pros: Useful technique for solving variations involving connected components.

Cons: Slightly more complex to implement than other methods.

📁 Code Structure
LongestConsecutive_Sorting.cpp → Implements the sorting-based approach.

LongestConsecutive_HashSet.cpp → Implements the hash set optimal approach.

LongestConsecutive_DSU.cpp → Implements the union-find (DSU) approach.

✍️ Author
Crafted with 💡 by [Ridham Garg or irythmgarg]
Feel free to ⭐️ the repo if this helped you!

