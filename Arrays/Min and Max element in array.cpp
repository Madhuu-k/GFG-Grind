// Problem Link: https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=1&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions
// Time Complexity: o(n)

// User function Template for C++
class Solution {
public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n = arr.size();
        int mini = arr[0];
        int maxi = arr[0];

        for(int i = 1; i < n; i++){
            if(arr[i] < mini) mini = arr[i];
            if(arr[i] > maxi) maxi = arr[i];
        }

        return {mini, maxi};
    }
};