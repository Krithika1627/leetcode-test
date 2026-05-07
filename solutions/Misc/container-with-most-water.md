# Container With Most Water

**Difficulty:** Medium | **Topic:** Misc | **Language:** text  
**Solved:** 2026-05-07  
**LeetCode:** https://leetcode.com/problems/container-with-most-water/

## Approach
in java

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```text
        int right = height.length - 1;

        int maxWater = 0;

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

        int left = 0;
class Solution {
    public int maxArea(int[] height) {

```

## Runtime & Memory
- Runtime: N/A
- Memory: N/A

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
