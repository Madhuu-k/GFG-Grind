// Problem Link: https://www.geeksforgeeks.org/problems/combination-sum-1587115620/1
// Time Complexity: O(2^n)

class Solution {
public:
    void combinations(vector<int>& arr, vector<vector<int>>& ans, vector<int>& curr, int target, int i){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if(i == arr.size() || target < 0) return;
        curr.push_back(arr[i]);
        combinations(arr, ans, curr, target - arr[i], i);

        curr.pop_back();
        combinations(arr, ans, curr, target, i + 1);
    }


    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        // code here
        vector<vector<int>> ans;
        vector<int> curr;
        combinations(arr, ans, curr, target, 0);
        return ans;
    }
};