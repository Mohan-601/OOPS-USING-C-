//  HackerRank — Insert at Position

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

node* insertAtPosition(node* head, int data, int pos) {
    node* newNode = new node(data);

    if(pos == 0) {
        newNode->next = head;
        return newNode;
    }

    node* temp = head;
    for(int i = 0; i < pos-1; i++)
        temp = temp->next;

    newNode->next = temp->next;
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
    node* head = new node(1);
    head->next = new node(3);

    head = insertAtPosition(head, 2, 1);

    print(head);
    return 0;
}
