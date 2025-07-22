// Problem Link: https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions
// Time Complexity: o(n)

class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int left = 0, maxSum = 0;
        for(int right = 0; right < arr.size(); right++){
            maxSum += arr[right];

            while(maxSum > target && left < right){
                maxSum -= arr[left];
                left++;
            }
            if(maxSum == target) return {left + 1, right + 1};
        }
        return {-1};
    }
};