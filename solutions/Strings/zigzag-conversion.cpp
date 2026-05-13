
        for (char c : s) {
            rows[currentRow] += c;

            // Change direction at top/bottom
            if (currentRow == 0 || currentRow == numRows - 1)
                goingDown = !goingDown;

            currentRow += goingDown ? 1 : -1;
        }

        string result = "";
        int currentRow = 0;
        bool goingDown = false;

        vector<string> rows(numRows);

        if (numRows == 1 || s.size() <= numRows)
            return s;
    string convert(string s, int numRows) {
class Solution {
public:
