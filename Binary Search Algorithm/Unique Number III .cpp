// Problem Link: https://www.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1
// Time Complexity: o(log n)

class Solution {
public:
    int getSingle(vector<int> &arr) {
        // code here
        int low = 0, high = arr.size() - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if (mid % 2 == 1) mid--;  // make mid even
            if (nums[mid] == nums[mid + 1]) left = mid + 2;
            else right = mid;
        }
        return arr[low];
    }
};