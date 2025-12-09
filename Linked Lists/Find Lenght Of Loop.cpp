// Problem Link: https://www.geeksforgeeks.org/problems/find-length-of-loop-in-linked-list/1
// Time Complexity: O(n + k)

int cycleLength(node* &start) {
    node* slow = start;
    node* fast = start;

    while (fast && fast -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;

        if (slow == fast) {
            int count = 1;
            slow = slow -> next;
            while (slow != fast) {
                count++;
                slow = slow -> next;
            }
            return count;
        }
    }
    return 0;
}