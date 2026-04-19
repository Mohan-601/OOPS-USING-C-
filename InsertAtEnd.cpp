// wap to insert an element at the end of the linked lis
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
       node* insertatend(node* head,int value){
        node * n = new node(value);
        node* p = head;
        while(p->next != nullptr){
            p = p->next; }
        p->next =n;         
       }

    };
        int main(){
    node* n1,*n2,*n3,*n;
    n1 = new node(10);
    n2 = new node(20);
    n3 = new node(30);
    n1->next = n2;
    n2->next =n3;
    n1 = n1->insertatend(n1,90);
    return 0;
 }   