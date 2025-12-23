// Problem Link: https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
// Time Complexity: O(n log n)

class Solution {
public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        int cost = 0;
        while(pq.size() > 1){
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            int sum = a + b;
            cost += sum;
            pq.push(sum);
        }
        return cost;
    }
};