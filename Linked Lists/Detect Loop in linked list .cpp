// Problem Link: https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
// Time Complexity: O(n)

/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
public:
    bool detectLoop(Node* start) {
        // code here
        Node* slow = start;
        Node* fast = start;

        while(fast && fast -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;

            if(slow == fast) return true;
        }
        return false;
    }
};