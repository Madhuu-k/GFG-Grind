// Problem Link: https://www.geeksforgeeks.org/problems/check-if-linked-list-is-palindrome/1
// Time Complexity: O(n)


bool isPalindrome(node* start) {
    if (!start || !start -> next) return true;

    node* slow = start;
    node* fast = start;

    while (fast -> next && fast -> next -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    node* prev = nullptr;
    node* temp = slow -> next;
    node* next = nullptr;

    while (temp) {
        next = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = next;
    }

    node* p1 = start;
    node* p2 = prev;

    while (p2) {
        if (p1 -> data != p2 -> data) return false;
        p1 = p1 -> next;
        p2 = p2 -> next;
    }

    return true;
}

