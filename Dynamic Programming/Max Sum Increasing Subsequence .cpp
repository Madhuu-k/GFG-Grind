// Problem Link: https://www.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1
// Time Complexity: O(n^2)

class Solution {
public:
    int maxSumIS(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n);
        for(int i = 0; i < n; i++){
            dp[i] = arr[i];
            for(int j = 0; j < i; j++){
                if(arr[j] < arr[i]) dp[i] = max(dp[i], arr[i] + dp[j]);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};