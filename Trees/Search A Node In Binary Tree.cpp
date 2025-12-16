// Problem Link: https://www.geeksforgeeks.org/problems/search-a-node-in-binary-tree/1
// Time Complexity: O(n)

bool search(Tree* root, int val) {
    if (root == nullptr) return false;
    if (root -> x == val) return true;

    return search(root -> left, val) || search(root -> right, val);
}

