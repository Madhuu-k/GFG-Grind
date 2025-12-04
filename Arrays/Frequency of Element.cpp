// Problem Link: https://www.geeksforgeeks.org/problems/frequency-of-elements--111353/0?utm_source=chatgpt.com
// Time Complexity: O(n)

class Solution {
public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        unordered_map<int, int> freq;
        vector<vector<int>> result;

        for(int i = 0; i < arr.size(); i++) freq[arr[i]]++;

        for(const auto& pair : freq) result.push_back({pair.first, pair.second});


        return result;

    }
};