//  Delete node in a Linked List leetcode -#237


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
    void deletenode(node* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

void print(node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    node* head = new node(4);
    head->next = new node(5);
    head->next->next = new node(1);
    head->next->next->next = new node(9);

    Solution obj;
    obj.deletenode(head->next); 

    print(head);
    return 0;
}
