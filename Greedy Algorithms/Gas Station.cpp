// Problem Link: https://www.geeksforgeeks.org/problems/circular-tour-1587115620/1
// Time Complexity: o(n)

/*You are required to complete this method*/
class Solution {
public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int start = 0, total = 0, tank = 0;
        for(int i = 0; i < cost.size(); i++){
            int gain = gas[i] - cost[i];
            total += gain;
            tank += gain;
            if(tank < 0){
                start = i + 1;
                tank = 0;
            }
        }
        return total >= 0 ? start : -1;
    }
};