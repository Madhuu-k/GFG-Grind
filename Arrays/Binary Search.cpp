// Problem Link: https://www.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&sortBy=submissions
// Time Complexity: o(log  n)

class Solution {
public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == k) return i;
        }
        return -1;
    }
};