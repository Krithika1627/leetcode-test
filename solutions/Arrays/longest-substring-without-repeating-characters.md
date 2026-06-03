---
# Longest Substring Without Repeating Characters

<!-- badges -->
![Easy](https://img.shields.io/badge/Easy-00b8a3?style=flat-square)  ![Arrays](https://img.shields.io/badge/Arrays-0a84ff?style=flat-square)  ![cpp](https://img.shields.io/badge/cpp-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/longest-substring-without-repeating-characters/  
**Solved:** 2026-06-03  
**Runtime:** 3 ms | **Memory:** 11.9 MB

---

## Approach
longest

## Complexity
- **Time:** <!-- e.g. O(n) -->
- **Space:** <!-- e.g. O(1) -->

## Solution

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            if (mp.find(s[right]) != mp.end() && mp[s[right]] >= left) {
                left = mp[s[right]] + 1;
            }
            mp[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [longest-substring-without-repeating-characters.cpp](./longest-substring-without-repeating-characters.cpp) | 2026-06-03 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
