---
# Regular Expression Matching

<!-- badges -->
![Hard](https://img.shields.io/badge/Hard-ff375f?style=flat-square)  ![DynamicProgramming](https://img.shields.io/badge/DynamicProgramming-0a84ff?style=flat-square)  ![python](https://img.shields.io/badge/python-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/regular-expression-matching/  
**Solved:** 2026-07-13  
**Runtime:** 11 ms | **Memory:** 19.7 MB

---

## Approach
<!-- describe your approach here -->

## Complexity
- **Time:** <!-- e.g. O(n) -->
- **Space:** <!-- e.g. O(1) -->


## Solution

```py
class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        m, n = len(s), len(p)

        dp = [[False] * (n + 1) for _ in range(m + 1)]
        dp[0][0] = True

        # Handle patterns like a*, a*b*, a*b*c*
        for j in range(2, n + 1):
            if p[j - 1] == '*':
                dp[0][j] = dp[0][j - 2]

        for i in range(1, m + 1):
            for j in range(1, n + 1):

                if p[j - 1] == '.' or p[j - 1] == s[i - 1]:
                    dp[i][j] = dp[i - 1][j - 1]

                elif p[j - 1] == '*':
                    # zero occurrences
                    dp[i][j] = dp[i][j - 2]

                    # one or more occurrences
                    if p[j - 2] == '.' or p[j - 2] == s[i - 1]:
                        dp[i][j] |= dp[i - 1][j]

        return dp[m][n]
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [regular-expression-matching.py](./regular-expression-matching.py) | 2026-07-13 |
| v2 | [regular-expression-matching_v2.py](./regular-expression-matching_v2.py) | 2026-07-13 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
