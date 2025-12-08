// Problem Link: https://www.geeksforgeeks.org/problems/delete-without-head-pointer/1
// Time Complexity: O(1)

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution {
public:
    void deleteNode(Node* temp) {
        // code here
        temp -> data = temp -> next -> data;
        Node* temp2 = temp -> next;
        temp -> next = temp -> next -> next;
        delete temp2;
    }
};