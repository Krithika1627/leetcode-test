---
# Merge k Sorted Lists

<!-- badges -->
![Hard](https://img.shields.io/badge/Hard-ff375f?style=flat-square)  ![LinkedList](https://img.shields.io/badge/LinkedList-0a84ff?style=flat-square)  ![cpp](https://img.shields.io/badge/cpp-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/merge-k-sorted-lists/  
**Solved:** 2026-06-30  
**Runtime:** <!-- runtime_ms --> ms | **Memory:** 18.8 MB

---

## Approach
<!-- describe your approach here -->

## Complexity
- **Time:** <!-- e.g. O(n) -->
- **Space:** <!-- e.g. O(1) -->

## Solution

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode dummy;
        ListNode* tail = &dummy;

        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                tail->next = l1;
                l1 = l1->next;
            }
            else
            {
                tail->next = l2;
                l2 = l2->next;
            }

            tail = tail->next;
        }

        tail->next = l1 ? l1 : l2;

        return dummy.next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.empty())
            return NULL;

        int interval = 1;

        while(interval < lists.size())
        {
            for(int i=0; i+interval<lists.size(); i += interval*2)
            {
                lists[i] = merge(lists[i], lists[i+interval]);
            }

            interval *= 2;
        }

        return lists[0];
    }
};
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [merge-k-sorted-lists.cpp](./merge-k-sorted-lists.cpp) | 2026-06-30 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
