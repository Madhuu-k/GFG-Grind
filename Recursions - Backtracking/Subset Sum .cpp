// Problem Link: https://www.geeksforgeeks.org/problems/subset-sums2234/1
// Time Complexity: O(2^n)

class Solution {
public:
    void subsets(vector<int>& arr, vector<int>& ans, int i, int sum){

        if(i == arr.size()){
            ans.push_back(sum);
            return;
        }
        // Take
        subsets(arr, ans, i + 1, sum + arr[i]);
        // Dont Take
        subsets(arr, ans, i + 1, sum);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        subsets(arr, ans, 0, 0);
        return ans;
    }
};