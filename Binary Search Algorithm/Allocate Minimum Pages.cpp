// Problem Link: https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
// Time Complexity: O(N log S)

class Solution {
public:
    bool isPossible(vector<int>& arr, int k, int capacity){
        int page = 1;
        int total = 0;
        for(int pages : arr){
            if(total + pages > capacity){
                page++;
                total = pages;
            }
            else total += pages;
            if(page > k) return false;
        }
        return true;
    }

    int findPages(vector<int> &arr, int k) {
        // code here
        if(arr.size() < k) return -1;

        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(isPossible(arr, k, mid)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};