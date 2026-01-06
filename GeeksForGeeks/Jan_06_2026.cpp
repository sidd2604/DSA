// https://www.geeksforgeeks.org/problems/max-xor-subarray-of-size-k/1

class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int maxXor = 0;
        int size = arr.size();
        for(int i=0; i<k; i++){
            maxXor ^= arr[i];
        }
        
        int arr_xor = maxXor;
        for(int i=k; i<size; i++){
            arr_xor ^= arr[i-k] ^ arr[i];
            maxXor = max(maxXor, arr_xor);
        }
        
        return maxXor;
    }
};