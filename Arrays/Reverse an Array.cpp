// Problem Link: https://www.geeksforgeeks.org/problems/reverse-an-array/0
// Time Complexity: O(n)

class Solution {
public:
    void reverseArray(vector<int> &arr) {
        // code here
        int left = 0, right = arr.size() - 1;
        while(left < right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++; right--;
        }
    }
};