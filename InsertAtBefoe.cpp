
//  wap to insert before an element in a linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertBefore(Node*& head, int key, int newData) {

    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    
    if (head->data == key) {
        Node* newNode = new Node();
        newNode->data = newData;
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* curr = head;

    while (curr->next != NULL && curr->next->data != key) {
        curr = curr->next;
    }


    if (curr->next == NULL) {
        cout << "Element not found\n";
        return;
    }

    
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = curr->next;
    curr->next = newNode;
}


void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
   
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};

    cout << "Original List:\n";
    display(head);

    int key, value;
    cout << "Enter element before which to insert: ";
    cin >> key;
    cout << "Enter new value: ";
    cin >> value;

    insertBefore(head, key, value);

    cout << "Updated List:\n";
    display(head);

    return 0;
}