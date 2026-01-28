// Problem Link: https://www.geeksforgeeks.org/problems/buy-stock-2/1
// Time Complexity: O(n)

class Solution {
public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int minPrice = prices[0], maxPrice = 0;
        for(int x : prices){
            if(x < minPrice) minPrice = x;
            if(x - minPrice > maxPrice) maxPrice = x - minPrice;
        }
        return maxPrice;
    }
};
