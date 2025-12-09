// Problem Link: https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
// Time Complexity: O(n)

/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
public:
    int getMiddle(Node* start) {
        // code here
        Node* slow = start;
        Node* fast = start;
        while(fast != nullptr && fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow->data;
    }
};