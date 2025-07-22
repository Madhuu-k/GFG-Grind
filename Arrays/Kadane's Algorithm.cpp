// Problem Link: https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?page=1&sortBy=submissions
// Time Complexity: o(n)

class Solution {
public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxSum = arr[0];
        int maxOverall = arr[0];
        for(int i = 1; i < arr.size(); i++){
            maxSum = max(arr[i], maxSum + arr[i]);
            maxOverall = max(maxOverall, maxSum);
        }
        return maxOverall;
    }
};