// LeetCode #61 — Rotate List

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
    node* rotateRight(node* head, int k) {
        if(!head || !head->next) return head;

        node* temp = head;
        int len = 1;

        while(temp->next) {
            temp = temp->next;
            len++;
        }

        temp->next = head;
        k = k % len;
        int steps = len - k;

        while(steps--)
            temp = temp->next;

        node* newHead = temp->next;
        temp->next = NULL;

        return newHead;
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

    Solution obj;
    head = obj.rotateRight(head, 1);

    print(head);
return 0;
}