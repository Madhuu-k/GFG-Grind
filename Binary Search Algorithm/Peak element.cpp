// Problem Link: https://www.geeksforgeeks.org/problems/peak-element/1
// Time Complexity: O(log N)

class Solution {
public:
    int peakElement(vector<int> &arr) {
        // code here
        int low = 0, high = arr.size() - 1;
        while(low < high){
            int mid = low + (high - low) / 2;
            if(arr[mid] < arr[mid + 1]) low = mid + 1;
            else high = mid;
        }
        return low;
    }
};