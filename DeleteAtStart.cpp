
// wap to delete an element at the start of a linked list
#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int value){
    data = value;
    next = nullptr;
}
node* deleteatstart(node* head){
        node* p = head;
        head = head->next;
        delete p;
        return head;}
};                               
      int main(){
    node* n1,*n2,*n3,*n;
    n1 = new node(10);
    n2 = new node(20);
    n3 = new node(30);
    n1->next = n2;
    n2->next =n3;
    n1 = n1->deleteatstart(n1);
    return 0;}
