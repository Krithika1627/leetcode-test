# Best Time to Buy and Sell Stock

**Difficulty:** Easy | **Topic:** Misc | **Language:** cpp  
**Solved:** 2026-05-12  
**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-mini;
            profit=max(cost,profit);
            mini=min(mini,prices[i]);
        }
        return profit;
    }
};

```

## Runtime & Memory
- Runtime: 0.00 ms
- Memory: 97.40 MB

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
