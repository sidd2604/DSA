// https://leetcode.com/problems/clear-digits/

class Solution {
public:
    string clearDigits(string s) {
        int i = 0;
        while (i < s.length()) {
            if (isdigit(s[i])) {
                if (i > 0) {
                    s.erase(i - 1, 2);
                    i -= 1;
                } else {
                    s.erase(i, 1);
                }
            } else {
                i++;
            }
        }
        return s;
    }
};