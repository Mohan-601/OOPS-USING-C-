// Hacker Rank-Find Merge Point of Two Lists
Given two linked lists that merge at some point, find the node where they merge.
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
    int findMergenode(node* head1, node* head2) {
        node* a = head1;
        node* b = head2;

        while (a != b) {
            a = (a == NULL) ? head2 : a->next;
            b = (b == NULL) ? head1 : b->next;
        }

        return a->data;
    }
};

int main() {
    node* common = new node(30);
    common->next = new node(40);

    node* l1 = new node(10);
    l1->next = new node(20);
    l1->next->next = common;

    node* l2 = new node(15);
    l2->next = common;

    Solution obj;
    cout << obj.findMergenode(l1, l2);

    return 0;
}