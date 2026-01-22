// Problem Link: https://www.geeksforgeeks.org/problems/house-robber-ii/1
// Time Complexity: O(n)

class Solution {
public:
    int linearMax(vector<int>& arr, int l, int r){
        int prev1 = 0, prev2 = 0;
        for(int i = l; i <= r; i++){
            int curr = max(prev1, arr[i] + prev2);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }

    int maxValue(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n == 1) return arr[0];
        int first = linearMax(arr, 1, n - 1);
        int second = linearMax(arr, 0, n - 2);
        return max(first, second);
    }
};
