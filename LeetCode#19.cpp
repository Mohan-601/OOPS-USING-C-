// Remove Nth node From End leetcode#19

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
    node* removeNthFromEnd(node* head, int n) {
        int size = 0;
        node* temp = head;

        while (temp) {
            size++;
            temp = temp->next;
        }

        if (n == size)
            return head->next;

        temp = head;
        for (int i = 0; i < size - n - 1; i++)
            temp = temp->next;

        temp->next = temp->next->next;
        return head;
    }
};

void print(node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    Solution obj;
    head = obj.removeNthFromEnd(head, 2);

    print(head);
    return 0;
}
