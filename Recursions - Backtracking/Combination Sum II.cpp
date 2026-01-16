// Problem Link: https://www.geeksforgeeks.org/problems/combination-sum-ii/1
// Time Complexity: O(n.2^n)

class Solution {
public:
    void combinations(int idx,
                      vector<int>& arr,
                      vector<int>& curr,
                      vector<vector<int>>& ans,
                      int target) {

        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = idx; i < arr.size(); i++) {
            if (i > idx && arr[i] == arr[i - 1]) continue;

            if (arr[i] > target) break;

            curr.push_back(arr[i]);
            combinations(i + 1, arr, curr, ans, target - arr[i]);
            curr.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> curr;

        combinations(0, candidates, curr, ans, target);
        return ans;
    }
};
