// Problem Link: https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
// Time Complexity: O(n)

class Solution {
public:
    Node *insertAtEnd(Node *start, int x) {
        // Code here
        Node* newNode = new Node(x);
        newNode -> next = nullptr;

        if(start == nullptr) return newNode;

        Node* temp = start;
        while(temp -> next != nullptr){
            temp = temp -> next;
        }

        temp -> next = newNode;
        return start;
    }
};