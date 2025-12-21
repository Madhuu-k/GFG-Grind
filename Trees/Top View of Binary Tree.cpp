// Problem Link: https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1
// Time Complexity: O(N logN)

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
    vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        if(root == nullptr) return ans;

        queue<pair<Node*, int>> q;
        map<int, int> mp;

        q.push({root, 0});

        while(!q.empty()){
            auto front = q.front();
            q.pop();

            Node* node = front.first;
            int hd = front.second;

            if(mp.find(hd) == mp.end()) mp[hd] = node -> data;
            if(node -> left) q.push({node -> left, hd - 1});
            if(node -> right) q.push({node -> right, hd + 1});
        }
        for(auto it : mp) ans.push_back(it.second);
        return ans;
    }
};