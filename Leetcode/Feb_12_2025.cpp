// https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/

class Solution {
public:
    int digits_sum(int num){
        int sum = 0;
        while(num>0){
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        vector<pair<int, int>> digitSum_num;
        for(int num : nums){
            digitSum_num.push_back({digits_sum(num), num});
        }

        sort(digitSum_num.begin(), digitSum_num.end());

        int maxPairSum = -1;

        for(int i=1; i<digitSum_num.size(); i++){
            if(digitSum_num[i].first==digitSum_num[i-1].first){
                int sum = digitSum_num[i].second + digitSum_num[i-1].second;
                maxPairSum = max(maxPairSum, sum);
            }
        }

        return maxPairSum;
    }
};