// HACKER-RANK:Compare Two Linked Lists
// Given two linked lists, determine whether they are identical.
// Two lists are identical if they have the same data and same order.

#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    bool compareLists(node* head1, node* head2) {
        while (head1 && head2) {
            if (head1->data != head2->data)
                return false;

            head1 = head1->next;
            head2 = head2->next;
        }

        return (head1 == NULL && head2 == NULL);
    }
};

int main() {
    node* l1 = new node(1);
    l1->next = new node(2);

    node* l2 = new node(1);
    l2->next = new node(2);

    Solution obj;
    if (obj.compareLists(l1,l2)) {
        cout << "Identical";
    } else {
        cout << "Not Identical";
    }
    return 0;
}
