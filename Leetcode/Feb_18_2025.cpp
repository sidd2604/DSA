// https://leetcode.com/problems/construct-smallest-number-from-di-string/

class Solution {
public:
    bool matchedpattern(string& num, string& pattern) {
        for (int i = 0; i < pattern.length(); i++) {
            if ((pattern[i] == 'I' && num[i] > num[i + 1]) ||
                (pattern[i] == 'D' && num[i] < num[i + 1]))
                return false;
        }

        return true;
    }
    string smallestNumber(string pattern) {
        int n = pattern.length();
        string num = "";

        for (int i = 1; i <= n + 1; i++) {
            num.push_back(i + '0');
        }

        while (!matchedpattern(num, pattern)) {
            next_permutation(num.begin(), num.end());
        }

        return num;
    }
};