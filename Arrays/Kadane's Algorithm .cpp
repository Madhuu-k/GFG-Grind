// Problem Link: https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
// Time Complexity: O(n)

class Solution {
public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxSum = INT_MIN, sum = 0;
        if(arr.size() == 1) return arr[0];
        for(int x : arr){
            sum += x;
            maxSum = max(maxSum, sum);
            if(sum < 0) sum = 0;
        }
        return maxSum;
    }
};