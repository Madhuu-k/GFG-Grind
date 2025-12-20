// Problem Link: https://www.geeksforgeeks.org/problems/right-view-of-binary-tree/1
// Time Complexity: O(n)

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
public:
    vector<int> rightView(Node *root) {
        //  code here
        vector<int> ans;
        if(root == nullptr) return ans;
        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                Node* node = q.front();
                q.pop();

                if(i == size - 1) ans.push_back(node -> data);
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }
        }
        return ans;
    }
};