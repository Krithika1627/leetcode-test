---
# Add Two Numbers

<!-- badges -->
![Medium](https://img.shields.io/badge/Medium-ffa116?style=flat-square)  ![Math](https://img.shields.io/badge/Math-0a84ff?style=flat-square)  ![text](https://img.shields.io/badge/text-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/add-two-numbers/  
**Solved:** 2026-06-03  
**Runtime:** <!-- runtime_ms --> ms | **Memory:** <!-- memory_mb --> MB

---

## Approach
<!-- describe your approach here -->

## Complexity
- **Time:** <!-- e.g. O(n) -->
- **Space:** <!-- e.g. O(1) -->

## Solution

```txt
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
};
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [add-two-numbers.txt](./add-two-numbers.txt) | 2026-06-03 |
| v2 | [add-two-numbers_v2.txt](./add-two-numbers_v2.txt) | 2026-06-03 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
