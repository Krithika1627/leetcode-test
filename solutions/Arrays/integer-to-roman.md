# Integer to Roman

**Difficulty:** Easy | **Topic:** Arrays | **Language:** cpp  
**Solved:** 2026-05-21  
**LeetCode:** https://leetcode.com/problems/integer-to-roman/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```cpp
class Solution {
public:
    string intToRoman(int num) {

        vector<int> values = {
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4, 1
        };

        vector<string> symbols = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        };

        string result = "";

        for (int i = 0; i < values.size(); i++) {
            while (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            }
        }

        return result;
    }
};
```

## Runtime & Memory
- Runtime: 9.00 ms
- Memory: 12.00 MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->

## Versions
| Version | File | Date |
|---------|------|------|
| v2 | [integer-to-roman_v2.cpp](./integer-to-roman_v2.cpp) | 2026-07-01 |
