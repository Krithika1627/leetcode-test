# Container With Most Water

**Difficulty:** Medium | **Topic:** Misc | **Language:** text  
**Solved:** 2026-05-09  
**LeetCode:** https://leetcode.com/problems/container-with-most-water/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```text

        while (left < right) {
            int width = right - left;
            int h = Math.min(height[left], height[right]);

            int area = width * h;
            maxWater = Math.max(maxWater, area);

            // Move smaller height
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
}

```

## Runtime & Memory
- Runtime: 0.00 ms
- Memory: 0.00 MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
