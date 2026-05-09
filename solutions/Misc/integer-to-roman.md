# Integer to Roman

**Difficulty:** Medium | **Topic:** Misc | **Language:** text  
**Solved:** 2026-05-09  
**LeetCode:** https://leetcode.com/problems/integer-to-roman/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```text
            100, 90, 50, 40,
            10, 9, 5, 4, 1
        };

        vector<string> symbols = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        };

        string result = "";

        for (int i = 0; i < values.size(); i++) {
            while (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            }
        }

        return result;
    }
};

```

## Runtime & Memory
- Runtime: 0.00 ms
- Memory: 0.00 MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
