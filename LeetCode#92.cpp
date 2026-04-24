//  LeetCode #92 — Reverse Linked List II


#include <iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(nullptr){}
};

class Solution{
public:
    ListNode* reverseBetween(ListNode* head,int left,int right){
        ListNode dummy(0);
        dummy.next=head;

        ListNode* prev=&dummy;
        for(int i=1;i<left;i++) prev=prev->next;

        ListNode* curr=prev->next;

        for(int i=0;i<right-left;i++){
            ListNode* temp=curr->next;
            curr->next=temp->next;
            temp->next=prev->next;
            prev->next=temp;
        }

        return dummy.next;
    }
};

void print(ListNode* head){
    while(head){ cout<<head->val<<" "; head=head->next; }
    cout<<endl;
}

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);

    Solution s;
    head=s.reverseBetween(head,2,3);
    print(head);
}
