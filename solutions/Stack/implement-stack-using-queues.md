---
# Implement Stack using Queues

<!-- badges -->
![Easy](https://img.shields.io/badge/Easy-00b8a3?style=flat-square)  ![Stack](https://img.shields.io/badge/Stack-0a84ff?style=flat-square)  ![cpp](https://img.shields.io/badge/cpp-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/implement-stack-using-queues/  
**Solved:** 2026-07-05  
**Runtime:** <!-- runtime_ms --> ms | **Memory:** 10.1 MB

---

## Approach
<!-- describe your approach here -->

## Complexity
- **Time:** <!-- e.g. O(n) -->
- **Space:** <!-- e.g. O(1) -->

## Solution

```cpp
class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        int n=q.size();
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int x=q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [implement-stack-using-queues.cpp](./implement-stack-using-queues.cpp) | 2026-07-05 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
