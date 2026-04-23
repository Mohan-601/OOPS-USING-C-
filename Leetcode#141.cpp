// Linked List Cycle leetcode #141

#include <iostream>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    bool hasCycle(node* head) {
        node* slow = head;
        node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) return true;
        }
        return false;
    }
};

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = head; // create cycle

    Solution obj;
  if (obj.hasCycle(head)) {
        cout << "Cycle Found";
    } else {
        cout << "No Cycle";
    }
    return 0;
}
