// Problem Link: https://www.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1
// Time Complexity: O(n logn)

class Solution {
public:
    bool findTriplets(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());

        for(int i = 0; i < arr.size(); i++){
            if(i > 0 && arr[i] == arr[i-1]) continue;

            int left = i+1, right = arr.size() - 1;
            while(left < right){
                int sum = arr[i] + arr[left] + arr[right];
                if(sum == 0) return true;
                else if (sum < 0) left++;
                else right--;
            }

        }
        return false;
    }
};