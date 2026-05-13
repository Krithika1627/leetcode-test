# Zigzag Conversion

**Difficulty:** Easy | **Topic:** Strings | **Language:** cpp  
**Solved:** 2026-05-13  
**LeetCode:** https://leetcode.com/problems/zigzag-conversion/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```cpp

        for (char c : s) {
            rows[currentRow] += c;

            // Change direction at top/bottom
            if (currentRow == 0 || currentRow == numRows - 1)
                goingDown = !goingDown;

            currentRow += goingDown ? 1 : -1;
        }

        string result = "";
        int currentRow = 0;
        bool goingDown = false;

        vector<string> rows(numRows);

        if (numRows == 1 || s.size() <= numRows)
            return s;
    string convert(string s, int numRows) {
class Solution {
public:

```

## Runtime & Memory
- Runtime: 0.00 ms
- Memory: 14.10 MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
