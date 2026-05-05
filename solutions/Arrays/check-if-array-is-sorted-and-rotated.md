# Check if Array Is Sorted and Rotated

**Difficulty:** Easy | **Topic:** Arrays | **Language:** text  
**Solved:** 2026-05-05  
**LeetCode:** https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```text
class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                cnt++;
            }
        }
    }
        if(cnt==1) return true;
        return false;
};

```

## Runtime & Memory
- Runtime: N/A
- Memory: N/A

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
