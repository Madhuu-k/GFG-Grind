// Problem Link: https://www.geeksforgeeks.org/problems/wave-array-1587115621/1?page=1&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions
// Time Complexity: o(n)

class Solution {
public:
    void sortInWave(vector<int>& arr) {
        // code here
        for(int i = 0; i < arr.size() - 1; i++){
            if(i % 2 == 0){
                if(arr[i] < arr[i + 1]) swap(arr[i], arr[i + 1]);
            }
            else{
                if(arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
            }
        }
    }
};