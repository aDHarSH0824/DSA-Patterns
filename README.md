# 🧠 DSA Patterns Coding Hub

A restructured, customized repository organizing LeetCode challenges into foundational **Data Structures and Algorithms (DSA) Patterns**. Restructuring code under algorithmic patterns makes it easier to build mental templates, enabling you to solve unseen coding problems during technical interviews.

---

## 📂 Repository Structure

The code is organized as follows:
```
DSA-Patterns/
├── patterns/                     # Problems grouped by DSA patterns
│   ├── sliding-window/           # Problems solved using window expansion/shrinkage
│   ├── two-pointers/             # Converging/parallel pointer techniques
│   ├── merge-intervals/          # Interval overlap and line sweep operations
│   ├── binary-search/            # Logarithmic search on sorted boundaries
│   ├── stack-queue/              # LIFO/FIFO standard processing
│   ├── monotonic-stack/          # Finding next-greater/smaller element templates
│   └── hash-table-counting/      # Frequency counting and hash-based retrieval
└── README.md                     # This documentation file
```

---

## 📚 DSA Patterns Catalog

### 1. Sliding Window
*Used to perform operations on a specific window size of a given array or string, expanding/shrinking dynamically to satisfy constraints.*
* **When to use**: Input is a linear data structure (array, string, linked list), and you're asked to find the longest/shortest subarray, substring, or a value under certain criteria.
* **Problems**:
  * [0003 - Longest Substring Without Repeating Characters](./patterns/sliding-window/0003-longest-substring-without-repeating-characters) (Medium)
  * [0209 - Minimum Size Subarray Sum](./patterns/sliding-window/0209-minimum-size-subarray-sum) (Medium)
  * [1004 - Max Consecutive Ones III](./patterns/sliding-window/1004-max-consecutive-ones-iii) (Medium)

### 2. Two Pointers
*Uses two references reading through the data structure at different paces or direction boundaries until one or both hit certain endpoints.*
* **When to use**: Input is sorted, and you need to find pairs, triplets, or compare elements from both ends toward the middle.
* **Problems**:
  * [0015 - 3Sum](./patterns/two-pointers/0015-3sum) (Medium)
  * [0016 - 3Sum Closest](./patterns/two-pointers/0016-3sum-closest) (Medium)
  * [0026 - Remove Duplicates from Sorted Array](./patterns/two-pointers/0026-remove-duplicates-from-sorted-array) (Easy)
  * [0167 - Two Sum II - Input Array Is Sorted](./patterns/two-pointers/0167-two-sum-ii-input-array-is-sorted) (Medium)
  * [0977 - Squares of a Sorted Array](./patterns/two-pointers/0977-squares-of-a-sorted-array) (Easy)

### 3. Merge Intervals
*A pattern to deal with overlapping intervals. Perfect for scheduling, calendars, or continuous ranges.*
* **When to use**: Problem involves overlapping time intervals, range merges, or scheduling tasks.
* **Problems**:
  * [0056 - Merge Intervals](./patterns/merge-intervals/0056-merge-intervals) (Medium)
  * [0057 - Insert Interval](./patterns/merge-intervals/0057-insert-interval) (Medium)
  * [0986 - Interval List Intersections](./patterns/merge-intervals/0986-interval-list-intersections) (Medium)

### 4. Binary Search
*Used on a sorted boundary search space to achieve logarithmic runtime $O(\log n)$ by halving candidate options.*
* **When to use**: Search space is sorted, or you need to find peak indexes, bounds, or search boundaries.
* **Problems**:
  * [0033 - Search in Rotated Sorted Array](./patterns/binary-search/0033-search-in-rotated-sorted-array) (Medium)
  * [0034 - Find First and Last Position of Element in Sorted Array](./patterns/binary-search/0034-find-first-and-last-position-of-element-in-sorted-array) (Medium)
  * [0153 - Find Minimum in Rotated Sorted Array](./patterns/binary-search/0153-find-minimum-in-rotated-sorted-array) (Medium)
  * [0154 - Find Minimum in Rotated Sorted Array II](./patterns/binary-search/0154-find-minimum-in-rotated-sorted-array-ii) (Hard)
  * [0162 - Find Peak Element](./patterns/binary-search/0162-find-peak-element) (Medium)
  * [0275 - H-Index II](./patterns/binary-search/0275-h-index-ii) (Medium)
  * [0410 - Split Array Largest Sum](./patterns/binary-search/0410-split-array-largest-sum) (Hard)
  * [0704 - Binary Search](./patterns/binary-search/0704-binary-search) (Easy)
  * [0852 - Peak Index in a Mountain Array](./patterns/binary-search/0852-peak-index-in-a-mountain-array) (Medium)
  * [0875 - Koko Eating Bananas](./patterns/binary-search/0875-koko-eating-bananas) (Medium)
  * [1011 - Capacity To Ship Packages Within D Days](./patterns/binary-search/1011-capacity-to-ship-packages-within-d-days) (Medium)
  * [1482 - Minimum Number of Days to Make M Bouquets](./patterns/binary-search/1482-minimum-number-of-days-to-make-m-bouquets) (Medium)
  * [2226 - Maximum Candies Allocated to K Children](./patterns/binary-search/2226-maximum-candies-allocated-to-k-children) (Medium)

### 5. Stack & Queue
*Core linear data structures utilizing LIFO (Last In First Out) and FIFO (First In First Out) orderings to track state history.*
* **When to use**: Balancing brackets/parentheses, removing adjacent matches, tracking unique stream elements, or breadth-first ordering.
* **Problems**:
  * [0020 - Valid Parentheses](./patterns/stack-queue/0020-valid-parentheses) (Easy)
  * [0387 - First Unique Character in a String](./patterns/stack-queue/0387-first-unique-character-in-a-string) (Easy)
  * [1047 - Remove All Adjacent Duplicates In String](./patterns/stack-queue/1047-remove-all-adjacent-duplicates-in-string) (Easy)
  * [1209 - Remove All Adjacent Duplicates in String II](./patterns/stack-queue/1209-remove-all-adjacent-duplicates-in-string-ii) (Medium)

### 6. Monotonic Stack
*A stack that enforces a strict ordering (increasing or decreasing). Essential to optimize nested search down to $O(n)$ linear time.*
* **When to use**: Find the "next greater" or "next smaller" element for every position in an array.
* **Problems**:
  * [0496 - Next Greater Element I](./patterns/monotonic-stack/0496-next-greater-element-i) (Easy)
  * [0503 - Next Greater Element II](./patterns/monotonic-stack/0503-next-greater-element-ii) (Medium)
  * [0739 - Daily Temperatures](./patterns/monotonic-stack/0739-daily-temperatures) (Medium)

### 7. Hash Table & Counting
*Utilizing dictionary hashing maps or fixed tables to achieve constant-time $O(1)$ lookups and track occurrences.*
* **When to use**: Anagrams, checking existence of subsets, matching characters, or frequency comparison.
* **Problems**:
  * [0274 - H-Index](./patterns/hash-table-counting/0274-h-index) (Medium)
  * [0383 - Ransom Note](./patterns/hash-table-counting/0383-ransom-note) (Easy)
  * [0409 - Longest Palindrome](./patterns/hash-table-counting/0409-longest-palindrome) (Easy)
  * [2287 - Rearrange Characters to Make Target String](./patterns/hash-table-counting/2287-rearrange-characters-to-make-target-string) (Easy)
<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0031-next-permutation](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0031-next-permutation) |
| [0033-search-in-rotated-sorted-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0033-search-in-rotated-sorted-array) |
| [0046-permutations](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0046-permutations) |
| [0078-subsets](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0078-subsets) |
| [0153-find-minimum-in-rotated-sorted-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0153-find-minimum-in-rotated-sorted-array) |
| [0154-find-minimum-in-rotated-sorted-array-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0154-find-minimum-in-rotated-sorted-array-ii) |
| [0274-h-index](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/hash-table-counting/0274-h-index) |
| [0275-h-index-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0275-h-index-ii) |
| [0410-split-array-largest-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0410-split-array-largest-sum) |
| [0875-koko-eating-bananas](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0875-koko-eating-bananas) |
| [1011-capacity-to-ship-packages-within-d-days](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/1011-capacity-to-ship-packages-within-d-days) |
| [1260-shift-2d-grid](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/1260-shift-2d-grid) |
| [1482-minimum-number-of-days-to-make-m-bouquets](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/1482-minimum-number-of-days-to-make-m-bouquets) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/1979-find-greatest-common-divisor-of-array) |
| [2226-maximum-candies-allocated-to-k-children](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/2226-maximum-candies-allocated-to-k-children) |
## Binary Search
|  |
| ------- |
| [0033-search-in-rotated-sorted-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0033-search-in-rotated-sorted-array) |
| [0153-find-minimum-in-rotated-sorted-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0153-find-minimum-in-rotated-sorted-array) |
| [0154-find-minimum-in-rotated-sorted-array-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0154-find-minimum-in-rotated-sorted-array-ii) |
| [0275-h-index-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0275-h-index-ii) |
| [0410-split-array-largest-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0410-split-array-largest-sum) |
| [0875-koko-eating-bananas](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0875-koko-eating-bananas) |
| [1011-capacity-to-ship-packages-within-d-days](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/1011-capacity-to-ship-packages-within-d-days) |
| [1482-minimum-number-of-days-to-make-m-bouquets](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/1482-minimum-number-of-days-to-make-m-bouquets) |
| [2226-maximum-candies-allocated-to-k-children](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/2226-maximum-candies-allocated-to-k-children) |
## Sorting
|  |
| ------- |
| [0274-h-index](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/hash-table-counting/0274-h-index) |
## Counting Sort
|  |
| ------- |
| [0274-h-index](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/hash-table-counting/0274-h-index) |
## Dynamic Programming
|  |
| ------- |
| [0022-generate-parentheses](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0022-generate-parentheses) |
| [0410-split-array-largest-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0410-split-array-largest-sum) |
| [0509-fibonacci-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0509-fibonacci-number) |
## Greedy
|  |
| ------- |
| [0410-split-array-largest-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0410-split-array-largest-sum) |
## Prefix Sum
|  |
| ------- |
| [0410-split-array-largest-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0410-split-array-largest-sum) |
## Math
|  |
| ------- |
| [0509-fibonacci-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0509-fibonacci-number) |
| [1071-greatest-common-divisor-of-strings](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/1071-greatest-common-divisor-of-strings) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/1979-find-greatest-common-divisor-of-array) |
## Recursion
|  |
| ------- |
| [0509-fibonacci-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0509-fibonacci-number) |
## Memoization
|  |
| ------- |
| [0509-fibonacci-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0509-fibonacci-number) |
## Number Theory
|  |
| ------- |
| [1979-find-greatest-common-divisor-of-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/1979-find-greatest-common-divisor-of-array) |
## String
|  |
| ------- |
| [0017-letter-combinations-of-a-phone-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0022-generate-parentheses](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0022-generate-parentheses) |
| [1071-greatest-common-divisor-of-strings](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/1071-greatest-common-divisor-of-strings) |
## Backtracking
|  |
| ------- |
| [0017-letter-combinations-of-a-phone-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0022-generate-parentheses](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0022-generate-parentheses) |
| [0046-permutations](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0046-permutations) |
| [0078-subsets](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0078-subsets) |
## Bit Manipulation
|  |
| ------- |
| [0078-subsets](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0078-subsets) |
## Matrix
|  |
| ------- |
| [1260-shift-2d-grid](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/1260-shift-2d-grid) |
## Simulation
|  |
| ------- |
| [1260-shift-2d-grid](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/1260-shift-2d-grid) |
## Hash Table
|  |
| ------- |
| [0017-letter-combinations-of-a-phone-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0017-letter-combinations-of-a-phone-number) |
## Two Pointers
|  |
| ------- |
| [0031-next-permutation](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0031-next-permutation) |
## Stack
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0094-binary-tree-inorder-traversal) |
| [0144-binary-tree-preorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0145-binary-tree-postorder-traversal) |
## Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0094-binary-tree-inorder-traversal) |
| [0102-binary-tree-level-order-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0102-binary-tree-level-order-traversal) |
| [0144-binary-tree-preorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0145-binary-tree-postorder-traversal) |
## Depth-First Search
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0094-binary-tree-inorder-traversal) |
| [0144-binary-tree-preorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0145-binary-tree-postorder-traversal) |
## Binary Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0094-binary-tree-inorder-traversal) |
| [0102-binary-tree-level-order-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0102-binary-tree-level-order-traversal) |
| [0144-binary-tree-preorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0145-binary-tree-postorder-traversal) |
## Breadth-First Search
|  |
| ------- |
| [0102-binary-tree-level-order-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/0102-binary-tree-level-order-traversal) |
<!---LeetCode Topics End-->