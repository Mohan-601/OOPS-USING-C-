// Remove Duplicates from Sorted List leet code #83

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
        node* curr = head;

        while (curr && curr->next) {
            if (curr->val == curr->next->val)
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
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
    head->next = new node(1);
    head->next->next = new node(2);

    Solution obj;
    head = obj.deleteDuplicates(head);

    print(head);
    return 0;
}
