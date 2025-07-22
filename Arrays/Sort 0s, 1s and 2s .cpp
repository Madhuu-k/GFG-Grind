// Problem Link: https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&sortBy=submissions
// Time Complexity: o(n)

class Solution {
public:
    void sort012(vector<int>& arr) {
        // code here
        int low = 0, mid = 0, high = arr.size() - 1;
        while(mid <= high){
            if(arr[mid] == 0){
                swap(arr[mid], arr[low]);
                low++; mid++;
            }
            else if(arr[mid] == 1) mid++;
            else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }

    }
};