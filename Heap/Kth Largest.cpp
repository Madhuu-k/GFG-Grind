#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int KthLargest(vector<int>& arr, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < arr.size(); i++) {
        pq.push(arr[i]);

        if (pq.size() > k) pq.pop();
    }
    return pq.top();
}

int main() {
    vector<int> arr = { 12, 3, 5, 7, 19 };
    int K = 2;

    cout << K << " Largest in array: "  <<  KthLargest(arr, K);
    return 0;
}