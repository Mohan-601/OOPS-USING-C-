
// wap to insert an element at the start of the linked list
#include<iostream>
using namespace std;
class node{
 public:
           int data;
           node*next;
        node(int value){
            data = value;
            next = nullptr;
        }
        node* insertatstart(node* head,int value){
            node*p = new node(value);
            p->next = head;
            head = p;
            return head;
        }
};
 int main(){
    node* n1,*n2,*n3,*n;
    n1 = new node(10);
    n2 = new node(20);
    n3 = new node(30);
    n1->next = n2;
    n2->next =n3;
    n1 = n1->insertatstart(n1,90);
    return 0;
 }               