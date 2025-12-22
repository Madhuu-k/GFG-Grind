// Problem Link: https://www.geeksforgeeks.org/problems/k-largest-elements4206/1
// Time Complexity: O(K log K)

class Solution {
public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> res;

        for(int i = 0; i < arr.size(); i++){
            pq.push(arr[i]);
            if(pq.size() > k) pq.pop();
        }

        while(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
        sort(res.rbegin(), res.rend());
        return res;
    }
};