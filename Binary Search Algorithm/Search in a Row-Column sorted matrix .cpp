// Problem Link: https://www.geeksforgeeks.org/problems/search-in-a-matrix17201720/1
// Time Complexity: o(m+n)

class Solution {
public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int m = mat.size(), n = mat[0].size();
        int row = 0, col = n - 1;
        while(row < m && col >= 0){
            if(mat[row][col] == x) return true;
            else if(mat[row][col] > x) col--;
            else row++;
        }
        return false;
    }
};