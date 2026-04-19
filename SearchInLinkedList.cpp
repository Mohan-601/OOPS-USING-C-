
// wap to search for an element in a linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool search(Node* head, int key) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == key)
            return true;
        current = current->next;
    }
    return false;
}

int main() {

    Node* head = new Node();
    head->data = 10;

    head->next = new Node();
    head->next->data = 20;

    head->next->next = new Node();
    head->next->next->data = 30;

    head->next->next->next = new Node();
    head->next->next->next->data = 40;

    head->next->next->next->next = NULL;

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if (search(head, key))
        cout << "Element found in the linked list.";
    else
        cout << "Element not found in the linked list.";

    return 0;
}