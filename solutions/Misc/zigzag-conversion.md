# Zigzag Conversion

**Difficulty:** Medium | **Topic:** Misc | **Language:** text  
**Solved:** 2026-05-09  
**LeetCode:** https://leetcode.com/problems/zigzag-conversion/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```text

        int currentRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currentRow] += c;

            // Change direction at top/bottom
            if (currentRow == 0 || currentRow == numRows - 1)
                goingDown = !goingDown;

            currentRow += goingDown ? 1 : -1;
        }

        string result = "";

        for (string row : rows)
            result += row;

        return result;
    }
};

```

## Runtime & Memory
- Runtime: 3 ms
- Memory: 0 MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
