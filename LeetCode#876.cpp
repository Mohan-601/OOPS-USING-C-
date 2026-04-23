// Middle of Linked List // leet code #876

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
    node* middlenode(node* head) {
        node* slow = head;
        node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);

    Solution obj;
    node* mid = obj.middlenode(head);

    cout << "Middle: " << mid->val;
    return 0;
}

