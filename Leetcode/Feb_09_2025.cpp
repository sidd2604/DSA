// https://leetcode.com/problems/count-number-of-bad-pairs/

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long count = 0;

        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            nums[i] = nums[i]-i;
        }

        mp[nums[0]] = 1;

        for(int i=1; i<n; i++){
            int countofnumsi = mp[nums[i]];
            int totalnumbeforei = i;

            int badpairs = totalnumbeforei - countofnumsi;

            count += badpairs;
            
            mp[nums[i]]++;
        }

        return count;
    }
};