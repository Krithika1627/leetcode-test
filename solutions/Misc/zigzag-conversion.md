# Zigzag Conversion

**Difficulty:** Medium | **Topic:** Misc | **Language:** text  
**Solved:** 2026-05-06  
**LeetCode:** https://leetcode.com/problems/zigzag-conversion/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```text
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() <= numRows)
            return s;

        vector<string> rows(numRows);

        int currentRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currentRow] += c;

            // Change direction at top/bottom
            if (currentRow == 0 || currentRow == 
numRows - 1)
                goingDown = !goingDown;

            currentRow += goingDown ? 1 : -1;

```

## Runtime & Memory
- Runtime: N/A
- Memory: N/A

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
