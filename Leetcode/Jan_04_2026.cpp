// https://leetcode.com/problems/four-divisors/?envType=daily-question&envId=2026-01-04


class Solution {
public:
    int output(int x) {
        unordered_set<int> set;
        for (int i = 1; i <= sqrt(x); i++) {
            if (x % i == 0) {
                set.insert(i);
                set.insert(x / i);
            }
            if (set.size() > 4)
                return 0;
        }
        if (set.size() < 4)
            return 0;
        int sum = 0;
        for (int num : set) {
            sum += num;
        }
        return sum;
    }

    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += output(nums[i]);
        }
        return sum;
    }
};