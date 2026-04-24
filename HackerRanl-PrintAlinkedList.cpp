//  HackerRank — Print Linked List

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

void printList(node* head) {
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    node* head = new node(1);
    head->next = new node(2);

    printList(head);
}