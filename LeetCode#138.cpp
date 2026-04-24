// LeetCode #138 — Copy List with Random Pointer

#include <iostream>
#include <unordered_map>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* random;
    Node(int x):val(x),next(nullptr),random(nullptr){}
};

class Solution{
public:
    Node* copyRandomList(Node* head){
        unordered_map<Node*,Node*> mp;

        Node* curr=head;
        while(curr){
            mp[curr]=new Node(curr->val);
            curr=curr->next;
        }

        curr=head;
        while(curr){
            mp[curr]->next=mp[curr->next];
            mp[curr]->random=mp[curr->random];
            curr=curr->next;
        }

        return mp[head];
    }
};

void print(Node* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->random=head->next;

    Solution s;
    Node* copy=s.copyRandomList(head);

    print(copy);
}