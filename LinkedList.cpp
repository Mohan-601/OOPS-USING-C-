// wap to create a linked list:
#include<iostream>
using namespace std;
class node{
     public:
          int data;   
         node* next;
         node(int value){
           data = value; 
            next = nullptr;
         }
      
};
  void display(node* head){
          node* p = head;
          while(p)     
          {             
            cout<<p->data<<"->";
            p = p->next;  
          }
         }
int main(){
    node* n1,*n2,*n3;
    n1 = new node(10);
    n2 = new node(20);
    n3 = new node(30);
    n1->next = n2;
    n2->next =n3;
    display(n1);
return 0;
}