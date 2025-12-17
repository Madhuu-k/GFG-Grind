// Problem Link: https://www.geeksforgeeks.org/problems/check-for-bst/1
// Time Complexity: O(n)

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
public:
    bool isValid(Node* root, long long minVal, long long maxVal){
        if(root == nullptr) return true;

        if(root -> data <= minVal || root -> data >= maxVal) return false;
        return isValid(root -> left, minVal, root -> data) && isValid(root -> right, root -> data, maxVal);
    }

    bool isBST(Node* root) {
        // code here
        if(root == nullptr) return true;
        return isValid(root, LONG_MIN, LONG_MAX);
    }
};