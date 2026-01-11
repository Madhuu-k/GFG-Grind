// Problem Link: https://www.geeksforgeeks.org/problems/subsets-1613027340/1
// Time Complexity: O(n.2^n)

class Solution {
public:
    void subsets(vector<int>& nums, vector<int>& curr, vector<vector<int>>& ans, int i){
        if(i == nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        subsets(nums, curr, ans, i + 1);

        curr.pop_back();
        subsets(nums, curr, ans, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        vector<int> curr;
        subsets(arr, curr, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};