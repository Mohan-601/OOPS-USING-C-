// Reverse Linked List//Leet Code #206
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
    node* reverseList(node* head) {
        node* prev = NULL;
        node* curr = head;

        while (curr) {
            node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

void printList(node* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    Solution obj;
    head = obj.reverseList(head);

    printList(head);
    return 0;
}
