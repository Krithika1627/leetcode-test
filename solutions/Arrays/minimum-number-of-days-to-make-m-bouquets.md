---
# Minimum Number of Days to Make m Bouquets

<!-- badges -->
![Medium](https://img.shields.io/badge/Medium-ffa116?style=flat-square)  ![Arrays](https://img.shields.io/badge/Arrays-0a84ff?style=flat-square)  ![cpp](https://img.shields.io/badge/cpp-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/  
**Solved:** 2026-07-02  
**Runtime:** 22 ms | **Memory:** 70.4 MB

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
    int noOfB(vector<int>& bloomDay,int x,int m,int k,int n){
        int cnt=0;
        int noofb=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=x){
                cnt++;
            }    
            else{
                noofb+=cnt/k;
                cnt=0;
            }
        }
        noofb+=cnt/k;
        return noofb;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(n<(long long)m*(long long)k) return -1;
        int mine=INT_MAX;
        int maxe=INT_MIN;
        for(int i=0;i<n;i++){
            mine=min(mine,bloomDay[i]);
            maxe=max(maxe,bloomDay[i]);
        }
        int low=mine,high=maxe;
        int res=high;
        while(low<=high){
            int mid=(low+high)/2;
            int noofb=noOfB(bloomDay,mid,m,k,n);
            if(noofb>=m){
                res=mid;
                high=mid-1;;
            }else if(noofb<m){
                low=mid+1;
            }
        }
        return res;
    }
};
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [minimum-number-of-days-to-make-m-bouquets.cpp](./minimum-number-of-days-to-make-m-bouquets.cpp) | 2026-07-02 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
