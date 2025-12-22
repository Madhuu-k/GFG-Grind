// Problem Link: https://www.geeksforgeeks.org/problems/heap-sort/1
// Time Complexity: O(n log n)

// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
public:
    // Function to sort an array using Heap Sort.
    void heapifyDown(vector<int>& arr, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest]) largest = left;
        if (right < n && arr[right] > arr[largest]) largest = right;

        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapifyDown(arr, n, largest); // i = largest
        }
    }

    void heapSort(vector<int>& arr) {
        int n = arr.size();

        for (int i = n/2 - 1; i >= 0; i--) heapifyDown(arr, n, i);

        for (int i = n - 1; i > 0; i--) {
            swap(arr[0], arr[i]);
            heapifyDown(arr, i, 0);
        }
    }
};