// https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int low = 0;    // to represent indices of zero
        int mid = 0;    // to represent indeices of one
        int high = arr.size()-1;    // to represent indices of two 
        
        while(mid<=high){
            if(arr[mid]==0){
                // swap low with mid and increment low and mid
                int temp = arr[mid];
                arr[mid] = arr[low];
                arr[low] = temp;
                
                mid++;
                low++;
            }else if(arr[mid]==1){
                // simply increment mid by one
                mid++;
            }else{
                // swap high with mid and decrement high by one
                int temp = arr[high];
                arr[high] = arr[mid];
                arr[mid] = temp;
                
                high--;
            }
        }
    }
};