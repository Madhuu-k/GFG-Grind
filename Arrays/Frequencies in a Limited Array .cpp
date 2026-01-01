// Problem Link: https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
// Time Complexity: O(n + N)

class Solution {
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> res(arr.size() + 1, 0);
        for(int num : arr){
            if(num >= 1 && num <= arr.size()) res[num]++;
        }
        res.erase(res.begin());
        return res;
    }
};
