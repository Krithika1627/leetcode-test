---
# Container With Most Water

<!-- badges -->
![Medium](https://img.shields.io/badge/Medium-ffa116?style=flat-square)  ![TwoPointers](https://img.shields.io/badge/TwoPointers-0a84ff?style=flat-square)  ![java](https://img.shields.io/badge/java-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/container-with-most-water/  
**Solved:** 2026-07-13  
**Runtime:** 5 ms | **Memory:** 77.3 MB

---

## Approach
<!-- describe your approach here -->

## Complexity
- **Time:** <!-- e.g. O(n) -->
- **Space:** <!-- e.g. O(1) -->


## Solution

```java
class Solution {
    public int maxArea(int[] height) {
        int left = 0;
        int right = height.length - 1;

        int maxWater = 0;

        while (left < right) {
            int width = right - left;
            int h = Math.min(height[left], height[right]);

            int area = width * h;
            maxWater = Math.max(maxWater, area);

            // Move smaller height
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
}
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [container-with-most-water.java](./container-with-most-water.java) | 2026-07-13 |
| v2 | [container-with-most-water_v2.java](./container-with-most-water_v2.java) | 2026-07-13 |
| v3 | [container-with-most-water_v3.java](./container-with-most-water_v3.java) | 2026-07-13 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
