//  Merge Two Sorted Lists leetcode #21


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
    node* mergeTwoLists(node* l1, node* l2) {
        node dummy(0);
        node* tail = &dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        if (l1) tail->next = l1;
        if (l2) tail->next = l2;

        return dummy.next;
    }
};

void print(node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    node* l1 = new node(1);
    l1->next = new node(3);

    node* l2 = new node(2);
    l2->next = new node(4);

    Solution obj;
    node* result = obj.mergeTwoLists(l1, l2);

    print(result);
    return 0;
}

