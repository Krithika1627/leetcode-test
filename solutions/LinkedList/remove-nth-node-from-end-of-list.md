---
# Remove Nth Node From End of List

<!-- badges -->
![Easy](https://img.shields.io/badge/Easy-00b8a3?style=flat-square)  ![LinkedList](https://img.shields.io/badge/LinkedList-0a84ff?style=flat-square)  ![python](https://img.shields.io/badge/python-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/remove-nth-node-from-end-of-list/  
**Solved:** 2026-06-04  
**Runtime:** <!-- runtime_ms --> ms | **Memory:** 19.2 MB

---

## Approach
<!-- describe your approach here -->

## Complexity
- **Time:** <!-- e.g. O(n) -->
- **Space:** <!-- e.g. O(1) -->

## Solution

```py
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(0)
        dummy.next = head

        fast = dummy
        slow = dummy

        # Move fast n+1 steps ahead
        for _ in range(n + 1):
            fast = fast.next

        # Move both pointers
        while fast:
            fast = fast.next
            slow = slow.next

        # Remove the nth node from the end
        slow.next = slow.next.next

        return dummy.next
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [remove-nth-node-from-end-of-list.py](./remove-nth-node-from-end-of-list.py) | 2026-06-04 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
