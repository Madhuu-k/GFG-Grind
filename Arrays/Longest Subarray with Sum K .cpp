// Problem Link: https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
// Time Complexity: o(n)

class Solution {
public:
    int longestSubarray(vector<int>& arr, int K) {
        // code here
        unordered_map<long long,int> firstIdx;
        long long pref = 0;
        int best = 0;
        firstIdx[0] = -1; // prefix 0 at index -1
        for (int i = 0; i < (int)arr.size(); ++i) {
            pref += arr[i];
            if (firstIdx.find(pref) == firstIdx.end()) firstIdx[pref] = i;
            if (firstIdx.find(pref - K) != firstIdx.end()) {
                best = max(best, i - firstIdx[pref - K]);
            }
        }
        return best;
    }
};