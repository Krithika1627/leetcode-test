# Two Sum

**Difficulty:** Easy | **Topic:** Arrays | **Language:** text  
**Solved:** 2026-05-09  
**LeetCode:** https://leetcode.com/problems/two-sum/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```text
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            // If complement already exists
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            // Store current number and index
            mp[nums[i]] = i;
        }

        return {};
    }
};

```

## Runtime & Memory
- Runtime: 0.00 ms
- Memory: 0.00 MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
