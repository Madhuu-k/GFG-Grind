// Problem Link: https://www.geeksforgeeks.org/problems/key-pair5616/1
// Time Complexity: O(n logn)

class Solution {
public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(), arr.end());
        int left = 0, right = arr.size() - 1;
        while(left < right) {
            int sum = arr[left] + arr[right];
            if(sum == target) return true;
            else if(sum < target) left++;
            else right--;
        }
        return false;
    }
};