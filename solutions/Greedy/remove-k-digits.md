---
# Remove K Digits

<!-- badges -->
![Medium](https://img.shields.io/badge/Medium-ffa116?style=flat-square)  ![Greedy](https://img.shields.io/badge/Greedy-0a84ff?style=flat-square)  ![cpp](https://img.shields.io/badge/cpp-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/remove-k-digits/  
**Solved:** 2026-07-11  
**Runtime:** 7 ms | **Memory:** 11.5 MB

---

## Approach
testing complexity

## Complexity
- **Time:** <!-- e.g. O(n) -->
- **Space:** <!-- e.g. O(1) -->


## Solution

```cpp
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        int n=num.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        while(str.size()!=0 && str.back()=='0'){
            str.pop_back();
        }
        reverse(str.begin(),str.end());
        if(str.empty()) return "0";
        return str;
    }
};
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [remove-k-digits.cpp](./remove-k-digits.cpp) | 2026-07-11 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
