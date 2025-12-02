// Problem Link: https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
// Time Complexity: O(n)

class Solution {
public:
    bool isSorted(vector<int>& arr) {
        // code here
        bool isSort = true;
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i] > arr[i + 1]) isSort = false;
        }
        return isSort;
    }
};