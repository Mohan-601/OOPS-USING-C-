
// LeetCode #142 — Linked List Cycle II

// Given a linked list, return the node where the cycle begins.
// If there is no cycle, return NULL.

#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* detectCycle(ListNode *head) {
        if(!head) return nullptr;

        ListNode *slow = head, *fast = head;

    
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                
                ListNode* entry = head;
                while(entry != slow) {
                    entry = entry->next;
                    slow = slow->next;
                }
                return entry;
            }
        }
        return nullptr;
    }
};

int main() {
 
    ListNode* head = new ListNode(3);
    ListNode* n1 = new ListNode(2);
    ListNode* n2 = new ListNode(0);
    ListNode* n3 = new ListNode(-4);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n1; 

    Solution s;
    ListNode* res = s.detectCycle(head);

    if(res)
        cout << "Cycle starts at node: " << res->val;
    else
        cout << "No cycle";

    return 0;
}
