# Palindrome Number

**Difficulty:** Easy | **Topic:** Misc | **Language:** text  
**Solved:** 2026-05-09  
**LeetCode:** https://leetcode.com/problems/palindrome-number/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```text
class Solution {
    public boolean isPalindrome(int x) {

        // Negative numbers are not palindrome
        // Numbers ending with 0 (except 0 itself) also not palindrome
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;

        while (x > reversedHalf) {
            int digit = x % 10;
            reversedHalf = reversedHalf * 10 + digit;
            x /= 10;
        }

        // Even digits: x == reversedHalf
        // Odd digits: x == reversedHalf / 10
        return x == reversedHalf || x == reversedHalf / 10;
    }
}

```

## Runtime & Memory
- Runtime: 0 ms
- Memory: 0 MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
