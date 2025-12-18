#include <iostream>
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

int maxSum = INT_MIN;

int maxGain(Tree* root) {
    if (root == nullptr) return 0;

    int left = max(0, maxGain(root -> left));
    int right = max(0, maxGain(root -> right));

    int nodePath = left + right + root -> x;
    maxSum = max(maxSum, nodePath);

    return root -> x + max(left, right);
}

int maxPathSum(Tree* root) {
    maxSum = INT_MIN;
    maxGain(root);
    return maxSum;
}