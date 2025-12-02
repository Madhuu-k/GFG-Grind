// Problem Link: https://www.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1
// Time Complexity: O(n^3)

class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;

        for(int i = 0; i < arr.size(); i++){
            if(i > 0 && arr[i] == arr[i-1]) continue;
            for(int j = i + 1; j < arr.size(); j++){
                if(j > i +1 && arr[j] == arr[j-1]) continue;

                int left = j+1, right = arr.size()-1;
                while(left < right){
                    int sum = arr[left] + arr[right] + arr[i] + arr[j];
                    if(sum == target){
                        result.push_back({arr[i], arr[j], arr[left], arr[right]});
                        while(left < right && arr[left] == arr[left+1]) left++;
                        while(left < right && arr[right] == arr[right-1]) right--;
                        left++, right--;
                    }
                    else if(sum < target) left++;
                    else right--;
                }
            }
        }

        return result;
    }
};