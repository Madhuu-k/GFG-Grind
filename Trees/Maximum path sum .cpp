// Problem Link: https://www.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1
// Time Complexity: O(n)

/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
public:
    int maxSum = INT_MIN;
    int findMaxSum(Node *root) {
        // code here
        maxSum = INT_MIN;
        findMax(root);
        return maxSum;

    }

    int findMax(Node* root){
        if(root == nullptr) return 0;

        int left = max(0, findMax(root -> left));
        int right = max(0, findMax(root -> right));

        maxSum = max(maxSum, root->data + left + right);

        return root -> data + max(left, right);
    }
};