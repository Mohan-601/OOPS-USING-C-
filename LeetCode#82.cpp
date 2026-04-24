// LeetCode #82 — Remove Duplicates II

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
    node* deleteDuplicates(node* head) {
        node dummy(0);
        dummy.next = head;
        node* prev = &dummy;

        while(head) {
            if(head->next && head->val == head->next->val) {
                while(head->next && head->val == head->next->val)
                    head = head->next;
                prev->next = head->next;
            } else {
                prev = prev->next;
            }
            head = head->next;
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
    node* head = new node(1);
    head->next = new node(1);
    head->next->next = new node(2);

    Solution obj;
    head = obj.deleteDuplicates(head);

    print(head);
return 0;
}