// LeetCode #143 — Reorder List

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
    void reorderList(ListNode* head){
        if(!head) return;

        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* prev=nullptr;
        ListNode* curr=slow->next;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        slow->next=nullptr;

        ListNode* first=head;
        ListNode* second=prev;

        while(second){
            ListNode* t1=first->next;
            ListNode* t2=second->next;

            first->next=second;
            second->next=t1;

            first=t1;
            second=t2;
        }
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
    s.reorderList(head);
    print(head);
}