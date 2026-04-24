// LeetCode #160 — Intersection of Two Lists

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
    node* getIntersectionNode(node* headA, node* headB) {
        node* a = headA;
        node* b = headB;

        while(a != b) {
            a = (a == NULL) ? headB : a->next;
            b = (b == NULL) ? headA : b->next;
        }
        return a;
    }
};

int main() {
    node* common = new node(8);
    common->next = new node(10);

    node* l1 = new node(3);
    l1->next = new node(7);
    l1->next->next = common;

    node* l2 = new node(99);
    l2->next = common;

    Solution obj;
    node* res = obj.getIntersectionNode(l1, l2);

    if(res) cout << res->val;
    return 0;
}