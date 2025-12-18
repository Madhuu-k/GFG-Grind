// Problem Link: https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1
// Time Complexity: O(n)

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    Node* lca(Node* root, int n1, int n2) {
        //  code here
        if(root == nullptr) return nullptr;

        if(root -> data == n1 || root -> data == n2) return root;

        Node* left = lca(root -> left, n1, n2);
        Node* right = lca(root -> right, n1, n2);

        if(left && right) return root;
        return left ? left : right;
    }
};