// Problem Link: https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
// Time Complexity: O(n)

class Solution {
public:
    int getCount(Node* start) {
        // Code here
        Node* temp = start;
        int count = 0;
        while(temp != nullptr){
            count++;
            temp = temp -> next;
        }
        return count;
    }
};