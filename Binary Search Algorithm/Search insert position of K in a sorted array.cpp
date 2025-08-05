// Problem Link: https://www.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1
// Time Complexity: O(log N)

class Solution {
public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int low = 0, high = arr.size() - 1;
        int ans = arr.size();
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(arr[mid] == k) return mid;
            else if(arr[mid] > k){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};