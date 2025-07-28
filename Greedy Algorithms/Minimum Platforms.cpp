// Problem Link: https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
// Time Complexity: o(n log n)

class Solution {
public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        int n = arr.size();
        sort(arr.begin(), arr.end()); sort(dep.begin(), dep.end());
        int platforms = 1, result = 1;
        int i = 1, j = 0;
        while(i < n && j < n){
            if(arr[i] <= dep[j]){
                platforms++; i++;
            }
            else{
                platforms--; j++;
            }
            result = max(result, platforms);
        }
        return result;
    }
};
