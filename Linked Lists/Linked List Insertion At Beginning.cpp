// Problem Link: https://www.geeksforgeeks.org/problems/linked-list-insertion-at-beginning/1
// Time Complexity:  O(n)

class Solution {
public:
    Node *insertAtFront(Node *start, int x) {
        // Code here
        Node* newNode = new Node(x);
        newNode -> next = start;
        start = newNode;

        return start;
    }
};