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
│   ├── hash-table-counting/      # Frequency counting and hash-based retrieval
│   ├── backtracking/             # Exhaustive state-space search with pruning
│   ├── binary-tree/              # Hierarchical traversals, structural recursion & LCA
│   ├── binary-search-tree/       # Ordered tree properties, validation & search space reduction
│   ├── graphs/                   # Grid exploration, multi-source BFS & connected components
│   ├── dynamic-programming/      # Overlapping subproblems, state memoization & bottom-up tabulation
│   └── math-simulation/          # Number theory, GCD algorithms & matrix simulation
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
  * [2958 - Length of Longest Subarray With at Most K Frequency](./patterns/sliding-window/2958-length-of-longest-subarray-with-at-most-k-frequency) (Medium)

### 2. Two Pointers
*Uses two references reading through the data structure at different paces or direction boundaries until one or both hit certain endpoints.*
* **When to use**: Input is sorted, and you need to find pairs, triplets, or compare elements from both ends toward the middle.
* **Problems**:
  * [0015 - 3Sum](./patterns/two-pointers/0015-3sum) (Medium)
  * [0016 - 3Sum Closest](./patterns/two-pointers/0016-3sum-closest) (Medium)
  * [0026 - Remove Duplicates from Sorted Array](./patterns/two-pointers/0026-remove-duplicates-from-sorted-array) (Easy)
  * [0031 - Next Permutation](./patterns/two-pointers/0031-next-permutation) (Medium)
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
  * [3731 - Find Missing Elements](./patterns/binary-search/3731-find-missing-elements) (Easy)

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
  * [0001 - Two Sum](./patterns/hash-table-counting/0001-two-sum) (Easy)
  * [0274 - H-Index](./patterns/hash-table-counting/0274-h-index) (Medium)
  * [0383 - Ransom Note](./patterns/hash-table-counting/0383-ransom-note) (Easy)
  * [0409 - Longest Palindrome](./patterns/hash-table-counting/0409-longest-palindrome) (Easy)
  * [2287 - Rearrange Characters to Make Target String](./patterns/hash-table-counting/2287-rearrange-characters-to-make-target-string) (Easy)

### 8. Backtracking
*A systematic algorithmic technique to incrementally build candidate solutions and abandon ("backtrack") as soon as constraints are violated.*
* **When to use**: Generating permutations, combinations, subsets, or solving constraint satisfaction and puzzle problems.
* **Problems**:
  * [0017 - Letter Combinations of a Phone Number](./patterns/backtracking/0017-letter-combinations-of-a-phone-number) (Medium)
  * [0022 - Generate Parentheses](./patterns/backtracking/0022-generate-parentheses) (Medium)
  * [0039 - Combination Sum](./patterns/backtracking/0039-combination-sum) (Medium)
  * [0046 - Permutations](./patterns/backtracking/0046-permutations) (Medium)
  * [0078 - Subsets](./patterns/backtracking/0078-subsets) (Medium)

### 9. Binary Tree
*Non-linear hierarchical data structure traversal, construction, and property evaluation through structural recursion and level-order traversal.*
* **When to use**: Hierarchical data, recursive divide-and-conquer on left/right subtrees, tree traversals (preorder, inorder, postorder, BFS), and tree paths.
* **Problems**:
  * [0094 - Binary Tree Inorder Traversal](./patterns/binary-tree/0094-binary-tree-inorder-traversal) (Easy)
  * [0100 - Same Tree](./patterns/binary-tree/0100-same-tree) (Easy)
  * [0101 - Symmetric Tree](./patterns/binary-tree/0101-symmetric-tree) (Easy)
  * [0102 - Binary Tree Level Order Traversal](./patterns/binary-tree/0102-binary-tree-level-order-traversal) (Medium)
  * [0103 - Binary Tree Zigzag Level Order Traversal](./patterns/binary-tree/0103-binary-tree-zigzag-level-order-traversal) (Medium)
  * [0104 - Maximum Depth of Binary Tree](./patterns/binary-tree/0104-maximum-depth-of-binary-tree) (Easy)
  * [0105 - Construct Binary Tree from Preorder and Inorder Traversal](./patterns/binary-tree/0105-construct-binary-tree-from-preorder-and-inorder-traversal) (Medium)
  * [0106 - Construct Binary Tree from Inorder and Postorder Traversal](./patterns/binary-tree/0106-construct-binary-tree-from-inorder-and-postorder-traversal) (Medium)
  * [0107 - Binary Tree Level Order Traversal II](./patterns/binary-tree/0107-binary-tree-level-order-traversal-ii) (Medium)
  * [0110 - Balanced Binary Tree](./patterns/binary-tree/0110-balanced-binary-tree) (Easy)
  * [0111 - Minimum Depth of Binary Tree](./patterns/binary-tree/0111-minimum-depth-of-binary-tree) (Easy)
  * [0112 - Path Sum](./patterns/binary-tree/0112-path-sum) (Easy)
  * [0113 - Path Sum II](./patterns/binary-tree/0113-path-sum-ii) (Medium)
  * [0124 - Binary Tree Maximum Path Sum](./patterns/binary-tree/0124-binary-tree-maximum-path-sum) (Hard)
  * [0129 - Sum Root to Leaf Numbers](./patterns/binary-tree/0129-sum-root-to-leaf-numbers) (Medium)
  * [0144 - Binary Tree Preorder Traversal](./patterns/binary-tree/0144-binary-tree-preorder-traversal) (Easy)
  * [0145 - Binary Tree Postorder Traversal](./patterns/binary-tree/0145-binary-tree-postorder-traversal) (Easy)
  * [0226 - Invert Binary Tree](./patterns/binary-tree/0226-invert-binary-tree) (Easy)
  * [0236 - Lowest Common Ancestor of a Binary Tree](./patterns/binary-tree/0236-lowest-common-ancestor-of-a-binary-tree) (Medium)
  * [0543 - Diameter of Binary Tree](./patterns/binary-tree/0543-diameter-of-binary-tree) (Easy)
  * [0572 - Subtree of Another Tree](./patterns/binary-tree/0572-subtree-of-another-tree) (Easy)
  * [0951 - Flip Equivalent Binary Trees](./patterns/binary-tree/0951-flip-equivalent-binary-trees) (Medium)
  * [0958 - Check Completeness of a Binary Tree](./patterns/binary-tree/0958-check-completeness-of-a-binary-tree) (Medium)
  * [1123 - Lowest Common Ancestor of Deepest Leaves](./patterns/binary-tree/1123-lowest-common-ancestor-of-deepest-leaves) (Medium)

### 10. Binary Search Tree
*Exploiting the BST ordering invariant (left < root < right) to achieve logarithmic operations, inorder sorted traversals, and efficient key searches.*
* **When to use**: Data is naturally ordered, searching or validating BST properties, finding the kth element, or range queries.
* **Problems**:
  * [0098 - Validate Binary Search Tree](./patterns/binary-search-tree/0098-validate-binary-search-tree) (Medium)
  * [0099 - Recover Binary Search Tree](./patterns/binary-search-tree/0099-recover-binary-search-tree) (Medium)
  * [0108 - Convert Sorted Array to Binary Search Tree](./patterns/binary-search-tree/0108-convert-sorted-array-to-binary-search-tree) (Easy)
  * [0230 - Kth Smallest Element in a BST](./patterns/binary-search-tree/0230-kth-smallest-element-in-a-bst) (Medium)
  * [0235 - Lowest Common Ancestor of a Binary Search Tree](./patterns/binary-search-tree/0235-lowest-common-ancestor-of-a-binary-search-tree) (Medium)
  * [0653 - Two Sum IV - Input is a BST](./patterns/binary-search-tree/0653-two-sum-iv-input-is-a-bst) (Easy)
  * [0700 - Search in a Binary Search Tree](./patterns/binary-search-tree/0700-search-in-a-binary-search-tree) (Easy)

### 11. Graphs
*Modeling relational networks, matrix grids, connected components, and multi-source state transitions with BFS and DFS.*
* **When to use**: Connected components, shortest path in unweighted grids, flood fill, topological dependencies, or level-by-level state spread.
* **Problems**:
  * [0200 - Number of Islands](./patterns/graphs/0200-number-of-islands) (Medium)
  * [0547 - Number of Provinces](./patterns/graphs/0547-number-of-provinces) (Medium)
  * [0733 - Flood Fill](./patterns/graphs/0733-flood-fill) (Easy)
  * [0994 - Rotting Oranges](./patterns/graphs/0994-rotting-oranges) (Medium)

### 12. Dynamic Programming
*Breaking down complex problems into overlapping subproblems with optimal substructure, memorizing states via memoization or iterative tabulation.*
* **When to use**: Maximization/minimization problems, counting paths/ways, decision choices with state transitions.
* **Problems**:
  * [0509 - Fibonacci Number](./patterns/dynamic-programming/0509-fibonacci-number) (Easy)
  * [0746 - Min Cost Climbing Stairs](./patterns/dynamic-programming/0746-min-cost-climbing-stairs) (Easy)
  * [0877 - Stone Game](./patterns/dynamic-programming/0877-stone-game) (Medium)

### 13. Math & Simulation
*Applying number theory, mathematical reductions, greatest common divisor (Euclid's algorithm), and matrix simulation.*
* **When to use**: Mathematical identities, divisibility, transformations, and deterministic matrix manipulation.
* **Problems**:
  * [1071 - Greatest Common Divisor of Strings](./patterns/math-simulation/1071-greatest-common-divisor-of-strings) (Easy)
  * [1260 - Shift 2D Grid](./patterns/math-simulation/1260-shift-2d-grid) (Easy)
  * [1979 - Find Greatest Common Divisor of Array](./patterns/math-simulation/1979-find-greatest-common-divisor-of-array) (Easy)
  * [3345 - Smallest Divisible Digit Product I](./patterns/math-simulation/3345-smallest-divisible-digit-product-i) (Easy)
<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0001-two-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/hash-table-counting/0001-two-sum) |
| [0031-next-permutation](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/two-pointers/0031-next-permutation) |
| [0033-search-in-rotated-sorted-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0033-search-in-rotated-sorted-array) |
| [0046-permutations](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0046-permutations) |
| [0078-subsets](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0078-subsets) |
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0106-construct-binary-tree-from-inorder-and-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0106-construct-binary-tree-from-inorder-and-postorder-traversal) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0108-convert-sorted-array-to-binary-search-tree) |
| [0153-find-minimum-in-rotated-sorted-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0153-find-minimum-in-rotated-sorted-array) |
| [0154-find-minimum-in-rotated-sorted-array-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0154-find-minimum-in-rotated-sorted-array-ii) |
| [0200-number-of-islands](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0200-number-of-islands) |
| [0274-h-index](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/hash-table-counting/0274-h-index) |
| [0275-h-index-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0275-h-index-ii) |
| [0410-split-array-largest-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0410-split-array-largest-sum) |
| [0733-flood-fill](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0733-flood-fill) |
| [0746-min-cost-climbing-stairs](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/dynamic-programming/0746-min-cost-climbing-stairs) |
| [0875-koko-eating-bananas](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0875-koko-eating-bananas) |
| [0877-stone-game](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/dynamic-programming/0877-stone-game) |
| [0994-rotting-oranges](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0994-rotting-oranges) |
| [1011-capacity-to-ship-packages-within-d-days](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/1011-capacity-to-ship-packages-within-d-days) |
| [1260-shift-2d-grid](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/math-simulation/1260-shift-2d-grid) |
| [1482-minimum-number-of-days-to-make-m-bouquets](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/1482-minimum-number-of-days-to-make-m-bouquets) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/math-simulation/1979-find-greatest-common-divisor-of-array) |
| [2226-maximum-candies-allocated-to-k-children](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/2226-maximum-candies-allocated-to-k-children) |
| [2958-length-of-longest-subarray-with-at-most-k-frequency](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/sliding-window/2958-length-of-longest-subarray-with-at-most-k-frequency) |
| [3731-find-missing-elements](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/3731-find-missing-elements) |
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
| [3731-find-missing-elements](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/3731-find-missing-elements) |
## Counting Sort
|  |
| ------- |
| [0274-h-index](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/hash-table-counting/0274-h-index) |
## Dynamic Programming
|  |
| ------- |
| [0022-generate-parentheses](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0022-generate-parentheses) |
| [0124-binary-tree-maximum-path-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0124-binary-tree-maximum-path-sum) |
| [0410-split-array-largest-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/0410-split-array-largest-sum) |
| [0509-fibonacci-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/dynamic-programming/0509-fibonacci-number) |
| [0746-min-cost-climbing-stairs](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/dynamic-programming/0746-min-cost-climbing-stairs) |
| [0877-stone-game](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/dynamic-programming/0877-stone-game) |
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
| [0509-fibonacci-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/dynamic-programming/0509-fibonacci-number) |
| [0877-stone-game](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/dynamic-programming/0877-stone-game) |
| [1071-greatest-common-divisor-of-strings](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/math-simulation/1071-greatest-common-divisor-of-strings) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/math-simulation/1979-find-greatest-common-divisor-of-array) |
## Recursion
|  |
| ------- |
| [0509-fibonacci-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/dynamic-programming/0509-fibonacci-number) |
## Memoization
|  |
| ------- |
| [0509-fibonacci-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/dynamic-programming/0509-fibonacci-number) |
## Number Theory
|  |
| ------- |
| [1979-find-greatest-common-divisor-of-array](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/math-simulation/1979-find-greatest-common-divisor-of-array) |
## String
|  |
| ------- |
| [0017-letter-combinations-of-a-phone-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0017-letter-combinations-of-a-phone-number) |
| [0022-generate-parentheses](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0022-generate-parentheses) |
| [1071-greatest-common-divisor-of-strings](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/math-simulation/1071-greatest-common-divisor-of-strings) |
## Backtracking
|  |
| ------- |
| [0017-letter-combinations-of-a-phone-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0017-letter-combinations-of-a-phone-number) |
| [0022-generate-parentheses](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0022-generate-parentheses) |
| [0046-permutations](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0046-permutations) |
| [0078-subsets](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0078-subsets) |
| [0113-path-sum-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0113-path-sum-ii) |
## Bit Manipulation
|  |
| ------- |
| [0078-subsets](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0078-subsets) |
## Matrix
|  |
| ------- |
| [0200-number-of-islands](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0200-number-of-islands) |
| [0733-flood-fill](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0733-flood-fill) |
| [0994-rotting-oranges](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0994-rotting-oranges) |
| [1260-shift-2d-grid](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/math-simulation/1260-shift-2d-grid) |
## Simulation
|  |
| ------- |
| [1260-shift-2d-grid](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/math-simulation/1260-shift-2d-grid) |
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/hash-table-counting/0001-two-sum) |
| [0017-letter-combinations-of-a-phone-number](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/backtracking/0017-letter-combinations-of-a-phone-number) |
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0106-construct-binary-tree-from-inorder-and-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0106-construct-binary-tree-from-inorder-and-postorder-traversal) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0653-two-sum-iv-input-is-a-bst) |
| [1123-lowest-common-ancestor-of-deepest-leaves](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/1123-lowest-common-ancestor-of-deepest-leaves) |
| [2958-length-of-longest-subarray-with-at-most-k-frequency](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/sliding-window/2958-length-of-longest-subarray-with-at-most-k-frequency) |
| [3731-find-missing-elements](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search/3731-find-missing-elements) |
## Two Pointers
|  |
| ------- |
| [0031-next-permutation](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/two-pointers/0031-next-permutation) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0653-two-sum-iv-input-is-a-bst) |
## Stack
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0094-binary-tree-inorder-traversal) |
| [0144-binary-tree-preorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0145-binary-tree-postorder-traversal) |
## Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0094-binary-tree-inorder-traversal) |
| [0098-validate-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0098-validate-binary-search-tree) |
| [0099-recover-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0099-recover-binary-search-tree) |
| [0100-same-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0100-same-tree) |
| [0101-symmetric-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0101-symmetric-tree) |
| [0102-binary-tree-level-order-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0102-binary-tree-level-order-traversal) |
| [0103-binary-tree-zigzag-level-order-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0103-binary-tree-zigzag-level-order-traversal) |
| [0104-maximum-depth-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0104-maximum-depth-of-binary-tree) |
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0106-construct-binary-tree-from-inorder-and-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0106-construct-binary-tree-from-inorder-and-postorder-traversal) |
| [0107-binary-tree-level-order-traversal-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0107-binary-tree-level-order-traversal-ii) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0108-convert-sorted-array-to-binary-search-tree) |
| [0110-balanced-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0110-balanced-binary-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0111-minimum-depth-of-binary-tree) |
| [0113-path-sum-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0113-path-sum-ii) |
| [0124-binary-tree-maximum-path-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0124-binary-tree-maximum-path-sum) |
| [0129-sum-root-to-leaf-numbers](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0129-sum-root-to-leaf-numbers) |
| [0144-binary-tree-preorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0145-binary-tree-postorder-traversal) |
| [0226-invert-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0226-invert-binary-tree) |
| [0230-kth-smallest-element-in-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0230-kth-smallest-element-in-a-bst) |
| [0235-lowest-common-ancestor-of-a-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0235-lowest-common-ancestor-of-a-binary-search-tree) |
| [0236-lowest-common-ancestor-of-a-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0236-lowest-common-ancestor-of-a-binary-tree) |
| [0543-diameter-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0543-diameter-of-binary-tree) |
| [0572-subtree-of-another-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0572-subtree-of-another-tree) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0653-two-sum-iv-input-is-a-bst) |
| [0700-search-in-a-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0700-search-in-a-binary-search-tree) |
| [0951-flip-equivalent-binary-trees](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0951-flip-equivalent-binary-trees) |
| [0958-check-completeness-of-a-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0958-check-completeness-of-a-binary-tree) |
| [1123-lowest-common-ancestor-of-deepest-leaves](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/1123-lowest-common-ancestor-of-deepest-leaves) |
## Depth-First Search
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0094-binary-tree-inorder-traversal) |
| [0098-validate-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0098-validate-binary-search-tree) |
| [0099-recover-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0099-recover-binary-search-tree) |
| [0100-same-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0100-same-tree) |
| [0101-symmetric-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0101-symmetric-tree) |
| [0104-maximum-depth-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0104-maximum-depth-of-binary-tree) |
| [0110-balanced-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0110-balanced-binary-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0111-minimum-depth-of-binary-tree) |
| [0113-path-sum-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0113-path-sum-ii) |
| [0124-binary-tree-maximum-path-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0124-binary-tree-maximum-path-sum) |
| [0129-sum-root-to-leaf-numbers](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0129-sum-root-to-leaf-numbers) |
| [0144-binary-tree-preorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0145-binary-tree-postorder-traversal) |
| [0200-number-of-islands](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0200-number-of-islands) |
| [0226-invert-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0226-invert-binary-tree) |
| [0230-kth-smallest-element-in-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0230-kth-smallest-element-in-a-bst) |
| [0235-lowest-common-ancestor-of-a-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0235-lowest-common-ancestor-of-a-binary-search-tree) |
| [0236-lowest-common-ancestor-of-a-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0236-lowest-common-ancestor-of-a-binary-tree) |
| [0543-diameter-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0543-diameter-of-binary-tree) |
| [0547-number-of-provinces](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0547-number-of-provinces) |
| [0572-subtree-of-another-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0572-subtree-of-another-tree) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0653-two-sum-iv-input-is-a-bst) |
| [0733-flood-fill](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0733-flood-fill) |
| [0951-flip-equivalent-binary-trees](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0951-flip-equivalent-binary-trees) |
| [1123-lowest-common-ancestor-of-deepest-leaves](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/1123-lowest-common-ancestor-of-deepest-leaves) |
## Binary Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0094-binary-tree-inorder-traversal) |
| [0098-validate-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0098-validate-binary-search-tree) |
| [0099-recover-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0099-recover-binary-search-tree) |
| [0100-same-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0100-same-tree) |
| [0101-symmetric-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0101-symmetric-tree) |
| [0102-binary-tree-level-order-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0102-binary-tree-level-order-traversal) |
| [0103-binary-tree-zigzag-level-order-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0103-binary-tree-zigzag-level-order-traversal) |
| [0104-maximum-depth-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0104-maximum-depth-of-binary-tree) |
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0106-construct-binary-tree-from-inorder-and-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0106-construct-binary-tree-from-inorder-and-postorder-traversal) |
| [0107-binary-tree-level-order-traversal-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0107-binary-tree-level-order-traversal-ii) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0108-convert-sorted-array-to-binary-search-tree) |
| [0110-balanced-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0110-balanced-binary-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0111-minimum-depth-of-binary-tree) |
| [0113-path-sum-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0113-path-sum-ii) |
| [0124-binary-tree-maximum-path-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0124-binary-tree-maximum-path-sum) |
| [0129-sum-root-to-leaf-numbers](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0129-sum-root-to-leaf-numbers) |
| [0144-binary-tree-preorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0145-binary-tree-postorder-traversal) |
| [0226-invert-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0226-invert-binary-tree) |
| [0230-kth-smallest-element-in-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0230-kth-smallest-element-in-a-bst) |
| [0235-lowest-common-ancestor-of-a-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0235-lowest-common-ancestor-of-a-binary-search-tree) |
| [0236-lowest-common-ancestor-of-a-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0236-lowest-common-ancestor-of-a-binary-tree) |
| [0543-diameter-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0543-diameter-of-binary-tree) |
| [0572-subtree-of-another-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0572-subtree-of-another-tree) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0653-two-sum-iv-input-is-a-bst) |
| [0700-search-in-a-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0700-search-in-a-binary-search-tree) |
| [0951-flip-equivalent-binary-trees](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0951-flip-equivalent-binary-trees) |
| [0958-check-completeness-of-a-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0958-check-completeness-of-a-binary-tree) |
| [1123-lowest-common-ancestor-of-deepest-leaves](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/1123-lowest-common-ancestor-of-deepest-leaves) |
## Breadth-First Search
|  |
| ------- |
| [0100-same-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0100-same-tree) |
| [0101-symmetric-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0101-symmetric-tree) |
| [0102-binary-tree-level-order-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0102-binary-tree-level-order-traversal) |
| [0103-binary-tree-zigzag-level-order-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0103-binary-tree-zigzag-level-order-traversal) |
| [0104-maximum-depth-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0104-maximum-depth-of-binary-tree) |
| [0107-binary-tree-level-order-traversal-ii](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0107-binary-tree-level-order-traversal-ii) |
| [0111-minimum-depth-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0111-minimum-depth-of-binary-tree) |
| [0200-number-of-islands](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0200-number-of-islands) |
| [0226-invert-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0226-invert-binary-tree) |
| [0547-number-of-provinces](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0547-number-of-provinces) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0653-two-sum-iv-input-is-a-bst) |
| [0733-flood-fill](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0733-flood-fill) |
| [0958-check-completeness-of-a-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0958-check-completeness-of-a-binary-tree) |
| [0994-rotting-oranges](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0994-rotting-oranges) |
| [1123-lowest-common-ancestor-of-deepest-leaves](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/1123-lowest-common-ancestor-of-deepest-leaves) |
## String Matching
|  |
| ------- |
| [0572-subtree-of-another-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0572-subtree-of-another-tree) |
## Hash Function
|  |
| ------- |
| [0572-subtree-of-another-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0572-subtree-of-another-tree) |
## Binary Search Tree
|  |
| ------- |
| [0098-validate-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0098-validate-binary-search-tree) |
| [0099-recover-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0099-recover-binary-search-tree) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0108-convert-sorted-array-to-binary-search-tree) |
| [0230-kth-smallest-element-in-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0230-kth-smallest-element-in-a-bst) |
| [0235-lowest-common-ancestor-of-a-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0235-lowest-common-ancestor-of-a-binary-search-tree) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0653-two-sum-iv-input-is-a-bst) |
| [0700-search-in-a-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0700-search-in-a-binary-search-tree) |
## Game Theory
|  |
| ------- |
| [0877-stone-game](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/dynamic-programming/0877-stone-game) |
## Sliding Window
|  |
| ------- |
| [2958-length-of-longest-subarray-with-at-most-k-frequency](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/sliding-window/2958-length-of-longest-subarray-with-at-most-k-frequency) |
## DP on Trees
|  |
| ------- |
| [0124-binary-tree-maximum-path-sum](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0124-binary-tree-maximum-path-sum) |
| [0543-diameter-of-binary-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0543-diameter-of-binary-tree) |
| [1123-lowest-common-ancestor-of-deepest-leaves](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/1123-lowest-common-ancestor-of-deepest-leaves) |
## Divide and Conquer
|  |
| ------- |
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0106-construct-binary-tree-from-inorder-and-postorder-traversal](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/0106-construct-binary-tree-from-inorder-and-postorder-traversal) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-search-tree/0108-convert-sorted-array-to-binary-search-tree) |
## Binary Lifting
|  |
| ------- |
| [1123-lowest-common-ancestor-of-deepest-leaves](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/1123-lowest-common-ancestor-of-deepest-leaves) |
## Lowest Common Ancestor
|  |
| ------- |
| [1123-lowest-common-ancestor-of-deepest-leaves](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/binary-tree/1123-lowest-common-ancestor-of-deepest-leaves) |
## Union-Find
|  |
| ------- |
| [0200-number-of-islands](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0200-number-of-islands) |
| [0547-number-of-provinces](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0547-number-of-provinces) |
## Graph Theory
|  |
| ------- |
| [0547-number-of-provinces](https://github.com/aDHarSH0824/DSA-Patterns/tree/master/patterns/graphs/0547-number-of-provinces) |
<!---LeetCode Topics End-->