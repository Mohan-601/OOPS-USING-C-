//  HackerRank — Delete Node


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

node* deleteNode(node* head, int pos) {
    if(pos == 0) return head->next;

    node* temp = head;
    for(int i = 0; i < pos-1; i++)
        temp = temp->next;

    temp->next = temp->next->next;
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
    head->next = new node(2);
    head->next->next = new node(3);

    head = deleteNode(head, 1);

    print(head);
return 0;
}
