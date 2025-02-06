// https://leetcode.com/problems/tuple-with-same-product?envType=daily-question&envId=2025-02-06

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int total = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            for(int j=n-1; j>=i+1; j--){
                unordered_set<int> set;
                int prod = nums[i] * nums[j];

                for(int k = i+1; k<j; k++){
                    if(prod % nums[k]==0){
                        int last = prod / nums[k];

                        if(set.find(last) != set.end()){
                            total += 8;
                        }
                        set.insert(nums[k]);
                    }
                }
            }
        }
        return total;
    }
};