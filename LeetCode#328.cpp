//  LeetCode #328 — Odd Even Linked List

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
    node* oddEvenList(node* head) {
        if(!head) return head;

        node* odd = head;
        node* even = head->next;
        node* evenHead = even;

        while(even && even->next) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
        return head;
    }
};

void print(node* head) {
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);

    Solution obj;
    head = obj.oddEvenList(head);

    print(head);
}
