// Problem Link: https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1
// Time Complexity: O(n)

/*
class Node {
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
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int> ans;
        if(root == nullptr) return ans;

        queue<Node* > q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()){

            deque<int> dq;
            int n = q.size();

            for(int i = 0; i < n; i++){
                Node* node = q.front();
                q.pop();

                if(leftToRight) dq.push_back(node -> data);
                else dq.push_front(node -> data);

                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }
            for(int x : dq) ans.push_back(x);
            leftToRight = !leftToRight;
        }
        return ans;
    }
};