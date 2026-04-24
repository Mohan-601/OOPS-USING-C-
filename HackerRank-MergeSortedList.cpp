// HackerRank — Merge Sorted Lists

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int x):data(x),next(nullptr){}
};

class Solution{
public:
    Node* mergeLists(Node* head1,Node* head2){
        Node dummy(0),*tail=&dummy;

        while(head1 && head2){
            if(head1->data<head2->data){
                tail->next=head1;
                head1=head1->next;
            } else{
                tail->next=head2;
                head2=head2->next;
            }
            tail=tail->next;
        }
        tail->next=head1?head1:head2;
        return dummy.next;
    }
};

int main(){
    Node* a=new Node(1);
    a->next=new Node(3);

    Node* b=new Node(2);
    b->next=new Node(4);

    Solution s;
    Node* res=s.mergeLists(a,b);

    while(res){ cout<<res->data<<" "; res=res->next; }
}
