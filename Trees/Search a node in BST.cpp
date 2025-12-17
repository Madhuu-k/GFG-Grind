// Problem Link: https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1
// Time Complexity: O(log N)

/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
public:
    bool search(Node* root, int key) {
        // code here
        if(root == nullptr) return false;
        if(root -> data == key) return true;

        if(key < root -> data) return search(root -> left, key);
        else return search(root -> right, key);
    }
};