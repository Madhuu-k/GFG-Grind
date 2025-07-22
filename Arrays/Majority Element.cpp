// Problem Link: https://www.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&sortBy=submissions
// Time Complexity: o(n)

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        // code here
        //if(arr.size() == 1) return arr[0];
        unordered_map<int, int> maj;
        for(int i = 0; i < arr.size(); i++) maj[arr[i]]++;
        int maxFreq = 0;
        int maxElement = -1;
        for(auto it : maj){
            if(it.second > (arr.size() / 2) && it.second > maxFreq){
                maxFreq = it.second;
                maxElement = it.first;
            }
        }
        return maxElement;

    }
};