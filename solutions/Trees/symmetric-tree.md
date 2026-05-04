# Symmetric Tree

**Difficulty:** Easy | **Topic:** Trees | **Language:** text  
**Solved:** 2026-05-04  
**LeetCode:** https://leetcode.com/problems/symmetric-tree/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```text
(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), 
right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode 
*right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isMirror(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2) return true;
        if (!t1 || !t2) return false;
        
 *     TreeNode() : val(0), left(nullptr), right
 *     TreeNode *right;
 *     int val;
 *     TreeNode *left;
/**
 * Definition for a binary tree node.
 * struct TreeNode {

```

## Runtime & Memory
- Runtime: N/A
- Memory: 18.46 MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
