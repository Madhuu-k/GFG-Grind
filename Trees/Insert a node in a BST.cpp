// Problem Link: https://www.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1
// Time Complexity: O(log N)

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    Node* insert(Node* root, int key) {
        //  code  here
        if(root == nullptr) return new Node(key);
        if(key < root -> data) root -> left = insert(root -> left, key);
        else root -> right = insert(root -> right, key);
        return root;
    }
};