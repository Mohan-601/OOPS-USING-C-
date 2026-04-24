// LeetCode #2 — Add Two Numbers
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
    node* addTwoNumbers(node* l1, node* l2) {
        node dummy(0);
        node* tail = &dummy;
        int carry = 0;

        while(l1 || l2 || carry) {
            int sum = carry;

            if(l1) { sum += l1->val; l1 = l1->next; }
            if(l2) { sum += l2->val; l2 = l2->next; }

            carry = sum / 10;
            tail->next = new node(sum % 10);
            tail = tail->next;
        }
        return dummy.next;
    }
};

void print(node* head) {
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    node* l1 = new node(2);
    l1->next = new node(4);
    l1->next->next = new node(3);

    node* l2 = new node(5);
    l2->next = new node(6);
    l2->next->next = new node(4);

    Solution obj;
    node* res = obj.addTwoNumbers(l1, l2);

    print(res);
}

