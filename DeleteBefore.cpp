// wap to delete before an element in a linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteBefore(Node*& head, int key) {

    if (head == NULL || head->next == NULL) {
        cout << "Deletion not possible\n";
        return;
    }

    
    if (head->data == key) {
        cout << "No node exists before the given element\n";
        return;
    }

    Node *prev = NULL, *curr = head, *nextNode = head->next;

    // Traverse list
    while (nextNode != NULL && nextNode->data != key) {
        prev = curr;
        curr = nextNode;
        nextNode = nextNode->next;
    }

    // If key not found
    if (nextNode == NULL) {
        cout << "Element not found\n";
        return;
    }

    // Deleting node before key
    if (prev == NULL) {
        // Delete head
        head = curr->next;
        delete curr;
    } else {
        prev->next = curr->next;
        delete curr;
    }

    cout << "Node deleted successfully\n";
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

    int key;
    cout << "Enter element: ";
    cin >> key;

    deleteBefore(head, key);

    cout << "Updated List:\n";
    display(head);

    return 0;
}
