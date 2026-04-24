//  HackerRank — Insert at Tail

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

node* insertAtTail(node* head, int data) {
    node* newNode = new node(data);

    if(head == NULL) return newNode;

    node* temp = head;
    while(temp->next)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

void print(node* head) {
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    node* head = NULL;

    head = insertAtTail(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);

    print(head);
}

