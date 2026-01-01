// Problem Link: https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
// Time Complexity: O(n)

class Solution {
public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> res;
        int min = arr[0], max = arr[0];
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > max) max = arr[i];
            if(arr[i] < min) min = arr[i];
        }
        return {min, max};
    }
};