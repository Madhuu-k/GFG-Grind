// Problem Link: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
// Time Complexity: O(n)

class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        deque<int> dq;
        vector<int> result;
        int left = 0;

        for(int right = 0; right < arr.size(); right++){
            if(arr[right] < 0) dq.push_back(right);

            if(right - left + 1 == k) {
                if(dq.empty()) result.push_back(0);
                else result.push_back(arr[dq.front()]);

                if(!dq.empty() && dq.front() == left) dq.pop_front();
                left++;
            }
        }
        return result;
    }
};