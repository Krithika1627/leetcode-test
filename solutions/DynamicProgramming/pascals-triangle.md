---
# Pascal's Triangle

<!-- badges -->
![Easy](https://img.shields.io/badge/Easy-00b8a3?style=flat-square)  ![DynamicProgramming](https://img.shields.io/badge/DynamicProgramming-0a84ff?style=flat-square)  ![cpp](https://img.shields.io/badge/cpp-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/pascals-triangle/  
**Solved:** 2026-07-13  
**Runtime:** <!-- runtime_ms --> ms | **Memory:** 9.7 MB

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
    vector<int> generateRow(int n){
        vector<int> row;
        int ans=1;
        row.push_back(ans);
        for(int i=1;i<n;i++){
            ans=ans*(n-i)/i;
            row.push_back(ans);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=1;i<=numRows;i++){
            res.push_back(generateRow(i));
        }
        return res;
    }
};
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [pascals-triangle.cpp](./pascals-triangle.cpp) | 2026-07-13 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
