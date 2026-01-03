// https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/?envType=daily-question&envId=2026-01-03

class Solution {
public:
    int M = 1000000007;

    int numOfWays(int n) {
        vector<int> dpA(n + 1, 0);
        vector<int> dpB(n + 1, 0);

        dpA[1] = 6;
        dpB[1] = 6;

        if (n == 1)
            return (dpA[1] + dpB[1]) % M;

        for (int i = 2; i <= n; i++) {
            dpA[i] = (2LL * dpA[i - 1] + 2LL * dpB[i - 1]) % M;
            dpB[i] = (2LL * dpA[i - 1] + 3LL * dpB[i - 1]) % M;
        }

        return (dpA[n] + dpB[n]) % M;
    }
};
