// HackerRank — Reverse Print

#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int x) {
        data = x;
        next = NULL;
    }
};

void reversePrint(node* head) {
    if(head == NULL) return;

    reversePrint(head->next);
    cout << head->data << " ";
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    reversePrint(head);
}
