// Problem Link: https://www.geeksforgeeks.org/problems/find-median-in-a-stream-1587115620/1
// Time Complexity: O(log n)

class Solution {
public:
    priority_queue<int, vector<int>, greater<int>> right;
    priority_queue<int> left;
    vector<double> getMedian(vector<int> &arr) {
        // code here
        vector<double> result;
        for(int x : arr){
            if(left.empty() || x <= left.top()) left.push(x);
            else right.push(x);

            if(left.size() > right.size() + 1){
                right.push(left.top()); left.pop();
            }
            else if(left.size() < right.size()){
                left.push(right.top()); right.pop();
            }

            if(left.size() == right.size()) result.push_back((left.top() + right.top())/2.0);
            else result.push_back(left.top());
        }
        return result;

    }
};
