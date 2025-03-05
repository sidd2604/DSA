// https://leetcode.com/problems/count-total-number-of-colored-cells/

class Solution{
public:
    long long coloredCells(int n)
    {
        long long ans = 1;
        long long num = n;
        if (n == 1)
            return ans;
        return ans + 2 * num * (num - 1);
    }
};