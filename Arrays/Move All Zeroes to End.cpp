// Problem Link: https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
// Time Complexity: O(1)

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int idx = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] != 0) arr[idx++] = arr[i];
        }

        while(idx < n) arr[idx++] = 0;
    }
};