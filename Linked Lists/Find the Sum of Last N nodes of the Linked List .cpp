// Problem Link: https://www.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/1
// Time Complexity: O(L)

class Solution {
public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* start, int n) {
        // Code here
        if(start == nullptr || n <= 0) return 0;

        int length = 0;
        Node* temp = start;
        while(temp != nullptr){
            length++;
            temp = temp -> next;
        }

        if( n > length) n = length;

        temp = start;
        for(int i = 0; i < length - n; i++) temp = temp -> next;

        int sum = 0;
        while(temp != nullptr){
            sum += temp -> data;
            temp = temp -> next;
        }
        return sum;

    }
};