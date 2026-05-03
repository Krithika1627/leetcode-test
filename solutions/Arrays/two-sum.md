---
# Two Sum

**Difficulty:** Easy | **Topic:** Arrays | **Language:** python  
**Solved:** 2026-05-03  
**LeetCode:** https://leetcode.com/problems/two-sum/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```py
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap={}
        for i in range(len(nums)):
            n=target-nums[i]
            if n in hashmap:
                return [hashmap[n],i]
            else:
                if nums[i] not in hashmap:
                    hashmap[nums[i]]=i

```

## Runtime & Memory
- Runtime: null ms
- Memory: null MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
---
