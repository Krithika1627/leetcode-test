# Longest Palindromic Substring

**Difficulty:** Easy | **Topic:** Trees | **Language:** cpp  
**Solved:** 2026-05-10  
**LeetCode:** https://leetcode.com/problems/longest-palindromic-substring/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```cpp
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s) {
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            string odd = expand(s, i, i);       // odd length
            string even = expand(s, i, i + 1);  // even length

            if (odd.size() > result.size()) result = odd;
            if (even.size() > result.size()) result = even;
        }

        return result;
    }
};

```

## Runtime & Memory
- Runtime: 85.00 ms
- Memory: 174.20 MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
