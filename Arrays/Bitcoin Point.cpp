// Problem Link: https://www.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1?page=1&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions
// Time Complexity: o(n)
// User function template for C++
class Solution {
public:
    int findMaximum(vector<int> &arr) {
        // code here
        int maxSoFar = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > maxSoFar && arr[i] > arr[i + 1]) return arr[i];
            maxSoFar = max(maxSoFar, arr[i]);
        }
        return -1;
    }
};

