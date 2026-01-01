// Problem Link: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions
// Time Complexity: o(n)

class Solution {
public:
    int search(vector<int>& arr, int x) {
        // code here
        for(int i = 0;  i < arr.size(); i++){
            if(arr[i] == x) return i;
        }
        return -1;
    }
};