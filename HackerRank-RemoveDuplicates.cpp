// HackerRank — Remove duplicates
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
    Node* removeduplicates(Node* head){
        Node* curr=head;

        while(curr && curr->next){
            if(curr->data==curr->next->data)
                curr->next=curr->next->next;
            else curr=curr->next;
        }
        return head;
    }
};

int main(){
    Node* head=new Node(1);
    head->next=new Node(1);
    head->next->next=new Node(2);

    Solution s;
    head=s.removeduplicates(head);

    while(head){ cout<<head->data<<" "; head=head->next; }
}
