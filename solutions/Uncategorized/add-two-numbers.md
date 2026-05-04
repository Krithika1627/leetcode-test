# Add Two Numbers

**Difficulty:** Medium | **Topic:** Uncategorized | **Language:** text  
**Solved:** 2026-05-04  
**LeetCode:** https://leetcode.com/problems/add-two-numbers/

## Approach
<!-- add your approach here -->

## Complexity
- Time: <!-- e.g. O(n) -->
- Space: <!-- e.g. O(1) -->

## Solution
```text

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
};

```

## Runtime & Memory
- Runtime: N/A
- Memory: N/A

## Mistakes & Notes
<!-- use this section for post-solve reflections -->

## Related Problems
<!-- links to similar problems will be added in Part 2 -->
