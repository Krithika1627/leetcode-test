---
# Word Ladder

<!-- badges -->
![Hard](https://img.shields.io/badge/Hard-ff375f?style=flat-square)  ![Graphs](https://img.shields.io/badge/Graphs-0a84ff?style=flat-square)  ![cpp](https://img.shields.io/badge/cpp-555555?style=flat-square)  <!-- streak badge placeholder -->

**LeetCode:** https://leetcode.com/problems/word-ladder/  
**Solved:** 2026-07-13  
**Runtime:** 35 ms | **Memory:** 21.3 MB

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
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words(wordList.begin(), wordList.end());

        if (words.find(endWord) == words.end()) {
            return 0;
        }

        queue<pair<string, int>> q;
        q.push({beginWord, 1});

        // Mark beginWord visited if it happens to be in wordList
        words.erase(beginWord);

        while (!q.empty()) {
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();

            if (word == endWord) {
                return steps;
            }

            for (int i = 0; i < word.size(); i++) {
                char original = word[i];

                for (char ch = 'a'; ch <= 'z'; ch++) {
                    if (ch == original) continue;

                    word[i] = ch;

                    if (words.find(word) != words.end()) {
                        // Mark visited immediately
                        words.erase(word);

                        q.push({word, steps + 1});
                    }
                }

                // Restore before changing the next position
                word[i] = original;
            }
        }

        return 0;
    }
};
```

## Versions
| Version | File | Date |
|---------|------|------|
| v1 | [word-ladder.cpp](./word-ladder.cpp) | 2026-07-13 |

## Mistakes & Notes
<!-- post-solve reflections: what did you miss, what patterns did you notice -->

## Related Problems
<!-- links to related problems will be auto-populated in Part 3 -->

---
