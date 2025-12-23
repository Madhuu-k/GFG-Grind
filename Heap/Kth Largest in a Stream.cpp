// Problem Link: https://www.geeksforgeeks.org/problems/kth-largest-element-in-a-stream2220/1
// Time Complexity:  O(n log k)

class Solution {
public:
    vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> result;

        for (int i = 0; i < n; i++) {
            pq.push(arr[i]);
            if (pq.size() > k) pq.pop();
            if(pq.size() == k) result.push_back(pq.top());
            else result.push_back(-1);
        }

        return result;
    }
};