//  LeetCode #24 — Swap Nodes in Pairs

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
    ListNode* swapPairs(ListNode* head){
        ListNode dummy(0);
        dummy.next=head;
        ListNode* curr=&dummy;

        while(curr->next && curr->next->next){
            ListNode* first=curr->next;
            ListNode* second=curr->next->next;

            first->next=second->next;
            second->next=first;
            curr->next=second;

            curr=first;
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
    head=s.swapPairs(head);
    print(head);
}
