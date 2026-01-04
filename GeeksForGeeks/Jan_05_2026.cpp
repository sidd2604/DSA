// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int size = arr.size();
        int max = 0;
        for(int i=0; i<k; i++){
            max += arr[i];
        }
        
        int sum = max;
        for(int j=k; j<size; j++){
            sum += arr[j];
            sum -= arr[j-k];
            if(sum>max)
                max = sum;
        }
        
        return max;
    }
};