// LeetCode #725 — Split List in Parts

#include <iostream>
#include <vector>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(nullptr){}
};

class Solution{
public:
    vector<ListNode*> splitListToParts(ListNode* head,int k){
        vector<ListNode*> res(k,nullptr);

        int len=0;
        ListNode* temp=head;
        while(temp){ len++; temp=temp->next; }

        int size=len/k, extra=len%k;

        for(int i=0;i<k;i++){
            res[i]=head;
            int currSize=size+(i<extra);

            for(int j=0;j<currSize-1;j++) head=head->next;

            if(head){
                ListNode* next=head->next;
                head->next=nullptr;
                head=next;
            }
        }
        return res;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);

    Solution s;
    vector<ListNode*> res=s.splitListToParts(head,2);

    for(auto h:res){
        while(h){ cout<<h->val<<" "; h=h->next; }
        cout<<"| ";
    }
}