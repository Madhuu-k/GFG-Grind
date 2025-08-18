// Problem Link: https://www.geeksforgeeks.org/problems/trie-insert-and-search0651/1
// Time Complexity: O(N * L)

// User function template for C++
class Trie {
public:

    Trie* children[26];
    bool isEnd;
    Trie() {
        for(int i = 0; i < 26; i++) children[i] = nullptr;
        isEnd = false;
    }

    void insert(string &word) {
        // insert word into Trie
        Trie* node = this;
        for(char c : word){
            int idx = c - 'a';
            if(!node -> children[idx]) node -> children[idx] = new Trie();
            node = node -> children[idx];
        }
        node -> isEnd = true;
    }

    bool search(string &word) {
        // search word in the Trie
        Trie* node = this;
        for(char c : word){
            int idx = c - 'a';
            if(!node -> children[idx]) return false;
            node = node -> children[idx];
        }
        return node -> isEnd;
    }

    bool isPrefix(string &word) {
        // search prefix word in the Trie
        Trie* node = this;
        for(char c : word){
            int idx = c - 'a';
            if(!node -> children[idx]) return false;
            node = node -> children[idx];
        }
        return true;
    }
};
