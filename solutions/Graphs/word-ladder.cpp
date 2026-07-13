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