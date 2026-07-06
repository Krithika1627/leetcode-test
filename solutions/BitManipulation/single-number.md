---
# Single Number

<!-- badges -->
![Easy](https://img.shields.io/badge/Easy-00b8a3?style=flat-square)  ![BitManipulation](https://img.shields.io/badge/BitManipulation-0a84ff?style=flat-square)  ![cpp](https://img.shields.io/badge/cpp-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/single-number/  
**Solved:** 2026-07-06  
**Runtime:** <!-- runtime_ms --> ms | **Memory:** 20.7 MB

---

## Approach
<!-- describe your approach here -->

## Complexity
- **Time:** <!-- e.g. O(n) -->
- **Space:** <!-- e.g. O(1) -->

## Solution

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        return res;
    }
};
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [single-number.cpp](./single-number.cpp) | 2026-07-06 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
