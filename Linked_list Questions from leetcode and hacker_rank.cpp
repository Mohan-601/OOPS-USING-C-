
// 1. Hacker Rank-Find Merge Point of Two Lists
// Given two linked lists that merge at some point, find the node where they merge.
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;

//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     int findMergenode(node* head1, node* head2) {
//         node* a = head1;
//         node* b = head2;

//         while (a != b) {
//             a = (a == NULL) ? head2 : a->next;
//             b = (b == NULL) ? head1 : b->next;
//         }

//         return a->data;
//     }
// };

// int main() {
//     node* common = new node(30);
//     common->next = new node(40);

//     node* l1 = new node(10);
//     l1->next = new node(20);
//     l1->next->next = common;

//     node* l2 = new node(15);
//     l2->next = common;

//     Solution obj;
//     cout << obj.findMergenode(l1, l2);

//     return 0;
// }

// 2 HackerRank — Insert at Position

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// node* insertAtPosition(node* head, int data, int pos) {
//     node* newNode = new node(data);

//     if(pos == 0) {
//         newNode->next = head;
//         return newNode;
//     }

//     node* temp = head;
//     for(int i = 0; i < pos-1; i++)
//         temp = temp->next;

//     newNode->next = temp->next;
//     temp->next = newNode;

//     return head;
// }

// void print(node* head) {
//     while(head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(3);

//     head = insertAtPosition(head, 2, 1);

//     print(head);
// }


// 3 HackerRank — Delete Node


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// node* deleteNode(node* head, int pos) {
//     if(pos == 0) return head->next;

//     node* temp = head;
//     for(int i = 0; i < pos-1; i++)
//         temp = temp->next;

//     temp->next = temp->next->next;
//     return head;
// }

// void print(node* head) {
//     while(head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     head = deleteNode(head, 1);

//     print(head);
// }


// 4🔹 HackerRank — Insert at Tail

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// node* insertAtTail(node* head, int data) {
//     node* newNode = new node(data);

//     if(head == NULL) return newNode;

//     node* temp = head;
//     while(temp->next)
//         temp = temp->next;

//     temp->next = newNode;
//     return head;
// }

// void print(node* head) {
//     while(head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = NULL;

//     head = insertAtTail(head, 1);
//     head = insertAtTail(head, 2);
//     head = insertAtTail(head, 3);

//     print(head);
// }






// 5 HackerRank — Print Linked List

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// void printList(node* head) {
//     while(head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);

//     printList(head);
// }




//6 HackerRank — Reverse Print

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// void reversePrint(node* head) {
//     if(head == NULL) return;

//     reversePrint(head->next);
//     cout << head->data << " ";
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     reversePrint(head);
// }



// 7 HACKER-RANK:Compare Two Linked Lists
// Given two linked lists, determine whether they are identical.
// Two lists are identical if they have the same data and same order.

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;

//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     bool compareLists(node* head1, node* head2) {
//         while (head1 && head2) {
//             if (head1->data != head2->data)
//                 return false;

//             head1 = head1->next;
//             head2 = head2->next;
//         }

//         return (head1 == NULL && head2 == NULL);
//     }
// };

// int main() {
//     node* l1 = new node(1);
//     l1->next = new node(2);

//     node* l2 = new node(1);
//     l2->next = new node(2);

//     Solution obj;
//     if (obj.compareLists(l1,l2)) {
//         cout << "Identical";
//     } else {
//         cout << "Not Identical";
//     }
//     return 0;
// }

// 8 HackerRank — Reverse a Doubly Linked List (Tough Variant)
// Problem: Given a doubly linked list, reverse the list and return the new head.

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node* prev;

//     node(int val) {
//         data = val;
//         next = nullptr;
//         prev = nullptr;
//     }
// };

// class Solution {
// public:
//     node* reverse(node* head) {
//         node* curr = head;
//         node* temp = nullptr;

//         while(curr) {
//             // Swap next and prev
//             temp = curr->prev;
//             curr->prev = curr->next;
//             curr->next = temp;

//             // Move to next node (which is prev after swap)
//             curr = curr->prev;
//         }

//         // Adjust head
//         if(temp) {
//             head = temp->prev;
//         }

//         return head;
//     }
// };

// void printForward(node* head) {
//     while(head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {
//     node* head = new node(1);
//     node* n2 = new node(2);
//     node* n3 = new node(3);
//     node* n4 = new node(4);

//     head->next = n2;
//     n2->prev = head;

//     n2->next = n3;
//     n3->prev = n2;

//     n3->next = n4;
//     n4->prev = n3;

//     cout << "Original: ";
//     printForward(head);

//     Solution s;
//     head = s.reverse(head);

//     cout << "Reversed: ";
//     printForward(head);

//     return 0;
// }



// 9. LeetCode #2 — Add Two Numbers
// Problem:Given two non-empty linked lists representing two non-negative integers in reverse order, return their sum as a linked list.

// #include <iostream>
// using namespace std;

// class ListNode {
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode dummy(0), *curr = &dummy;
//         int carry = 0;

//         while(l1 || l2 || carry) {
//             int sum = carry;
//             if(l1) { sum += l1->val; l1 = l1->next; }
//             if(l2) { sum += l2->val; l2 = l2->next; }

//             carry = sum / 10;
//             curr->next = new ListNode(sum % 10);
//             curr = curr->next;
//         }
//         return dummy.next;
//     }
// };

// void print(ListNode* head){
//     while(head){ cout << head->val << " "; head=head->next; }
//     cout<<endl;
// }

// int main(){
//     ListNode* l1 = new ListNode(2);
//     l1->next = new ListNode(4);
//     l1->next->next = new ListNode(3);

//     ListNode* l2 = new ListNode(5);
//     l2->next = new ListNode(6);
//     l2->next->next = new ListNode(4);

//     Solution s;
//     print(s.addTwoNumbers(l1,l2));
// }

// 10. LeetCode #19 — Remove Nth Node From End
//  Problem:Remove the nth node from the end of the list and return its head.

// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     ListNode* removeNthFromEnd(ListNode* head,int n){
//         ListNode dummy(0);
//         dummy.next=head;
//         ListNode *fast=&dummy,*slow=&dummy;

//         for(int i=0;i<n;i++) fast=fast->next;
//         while(fast->next){
//             fast=fast->next;
//             slow=slow->next;
//         }

//         slow->next=slow->next->next;
//         return dummy.next;
//     }
// };

// void print(ListNode* head){
//     while(head){ cout<<head->val<<" "; head=head->next; }
//     cout<<endl;
// }

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(2);
//     head->next->next=new ListNode(3);
//     head->next->next->next=new ListNode(4);

//     Solution s;
//     head=s.removeNthFromEnd(head,2);
//     print(head);
// }

// 11. LeetCode #21 — Merge Two Sorted Lists
// Problem:Merge two sorted linked lists and return a sorted list.

// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     ListNode* mergeTwoLists(ListNode* l1,ListNode* l2){
//         ListNode dummy(0),*tail=&dummy;

//         while(l1 && l2){
//             if(l1->val<l2->val){
//                 tail->next=l1; l1=l1->next;
//             } else{
//                 tail->next=l2; l2=l2->next;
//             }
//             tail=tail->next;
//         }
//         tail->next=l1?l1:l2;
//         return dummy.next;
//     }
// };

// void print(ListNode* head){
//     while(head){ cout<<head->val<<" "; head=head->next; }
//     cout<<endl;
// }

// int main(){
//     ListNode* l1=new ListNode(1);
//     l1->next=new ListNode(3);

//     ListNode* l2=new ListNode(2);
//     l2->next=new ListNode(4);

//     Solution s;
//     print(s.mergeTwoLists(l1,l2));
// }


// 12. LeetCode #82 — Remove Duplicates II
// Problem:Remove all nodes that have duplicate numbers (leave only distinct numbers).

// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     ListNode* deleteDuplicates(ListNode* head){
//         ListNode dummy(0);
//         dummy.next=head;
//         ListNode* prev=&dummy;

//         while(head){
//             if(head->next && head->val==head->next->val){
//                 while(head->next && head->val==head->next->val)
//                     head=head->next;
//                 prev->next=head->next;
//             } else prev=prev->next;

//             head=head->next;
//         }
//         return dummy.next;
//     }
// };

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(1);
//     head->next->next=new ListNode(2);

//     Solution s;
//     head=s.deleteDuplicates(head);

//     while(head){ cout<<head->val<<" "; head=head->next; }
// }
// 13. LeetCode #83 — Remove Duplicates
// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     ListNode* deleteDuplicates(ListNode* head){
//         ListNode* curr=head;
//         while(curr && curr->next){
//             if(curr->val==curr->next->val)
//                 curr->next=curr->next->next;
//             else curr=curr->next;
//         }
//         return head;
//     }
// };

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(1);
//     head->next->next=new ListNode(2);

//     Solution s;
//     head=s.deleteDuplicates(head);

//     while(head){ cout<<head->val<<" "; head=head->next; }
// }
// 14. LeetCode #141 — Linked List Cycle
// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     bool hasCycle(ListNode* head){
//         ListNode *slow=head,*fast=head;
//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast) return true;
//         }
//         return false;
//     }
// };

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(2);
//     head->next->next=head; 

//     Solution s;
//     cout<<s.hasCycle(head);
// }
// 15. LeetCode #206 — Reverse Linked List
// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     ListNode* reverseList(ListNode* head){
//         ListNode *prev=nullptr,*curr=head;
//         while(curr){
//             ListNode* next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }
//         return prev;
//     }
// };

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(2);
//     head->next->next=new ListNode(3);

//     Solution s;
//     head=s.reverseList(head);

//     while(head){ cout<<head->val<<" "; head=head->next; }
// }
// 16. LeetCode #234 — Palindrome Linked List
// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     bool isPalindrome(ListNode* head){
//         ListNode *slow=head,*fast=head;

//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }

//         ListNode *prev=nullptr;
//         while(slow){
//             ListNode* next=slow->next;
//             slow->next=prev;
//             prev=slow;
//             slow=next;
//         }

//         while(prev){
//             if(head->val!=prev->val) return false;
//             head=head->next;
//             prev=prev->next;
//         }
//         return true;
//     }
// };

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(2);
//     head->next->next=new ListNode(1);

//     Solution s;
//     cout<<s.isPalindrome(head);
// }


// 17. LeetCode #160 — Intersection of Two Linked Lists
// Problem:given two singly linked lists, return the node at which the two lists intersect. If no intersection, return NULL.


// #include <iostream>
// using namespace std;

// class ListNode {
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// class Solution {
// public:
//     ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//         ListNode *p1 = headA, *p2 = headB;

//         while(p1 != p2) {
//             p1 = p1 ? p1->next : headB;
//             p2 = p2 ? p2->next : headA;
//         }
//         return p1;
//     }
// };

// int main() {

//     ListNode* common = new ListNode(8);
//     common->next = new ListNode(10);

//     ListNode* headA = new ListNode(3);
//     headA->next = new ListNode(7);
//     headA->next->next = common;

//     ListNode* headB = new ListNode(99);
//     headB->next = common;

//     Solution s;
//     ListNode* res = s.getIntersectionNode(headA, headB);

//     if(res) cout << "Intersection at: " << res->val;
//     else cout << "No intersection";
// }


// 18. LeetCode #237 — Delete Node in a Linked List
// Problem:You are given only access to a node (not head). Delete that node.

// #include <iostream>
// using namespace std;

// class ListNode {
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         node->val = node->next->val;
//         node->next = node->next->next;
//     }
// };

// void print(ListNode* head){
//     while(head){ cout<<head->val<<" "; head=head->next; }
//     cout<<endl;
// }

// int main() {
//     ListNode* head = new ListNode(4);
//     head->next = new ListNode(5);
//     head->next->next = new ListNode(1);
//     head->next->next->next = new ListNode(9);

//     Solution s;
//     s.deleteNode(head->next); // delete 5

//     print(head);
// }



// 19. LeetCode #328 — Odd Even Linked List
//  Problem:Group all odd-index nodes together followed by even-index nodes.


// #include <iostream>
// using namespace std;

// class ListNode {
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(!head) return head;

//         ListNode *odd = head, *even = head->next, *evenHead = even;

//         while(even && even->next) {
//             odd->next = even->next;
//             odd = odd->next;

//             even->next = odd->next;
//             even = even->next;
//         }

//         odd->next = evenHead;
//         return head;
//     }
// };

// void print(ListNode* head){
//     while(head){ cout<<head->val<<" "; head=head->next; }
//     cout<<endl;
// }

// int main() {
//     ListNode* head = new ListNode(1);
//     head->next = new ListNode(2);
//     head->next->next = new ListNode(3);
//     head->next->next->next = new ListNode(4);

//     Solution s;
//     head = s.oddEvenList(head);

//     print(head);
// }




// 20. LeetCode #876 — Middle of the Linked List
// Problem:Return the middle node of a linked list. If two middle nodes, return second.

// #include <iostream>
// using namespace std;

// class ListNode {
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode *slow = head, *fast = head;

//         while(fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };

// int main() {
//     ListNode* head = new ListNode(1);
//     head->next = new ListNode(2);
//     head->next->next = new ListNode(3);
//     head->next->next->next = new ListNode(4);
//     head->next->next->next->next = new ListNode(5);

//     Solution s;
//     ListNode* mid = s.middleNode(head);

//     cout << "Middle: " << mid->val;
// }

// 21 LeetCode #142 — Linked List Cycle II

// Given a linked list, return the node where the cycle begins.
// If there is no cycle, return NULL.

// #include <iostream>
// using namespace std;

// class ListNode {
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// class Solution {
// public:
//     ListNode* detectCycle(ListNode *head) {
//         if(!head) return nullptr;

//         ListNode *slow = head, *fast = head;

    
//         while(fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast) {
                
//                 ListNode* entry = head;
//                 while(entry != slow) {
//                     entry = entry->next;
//                     slow = slow->next;
//                 }
//                 return entry;
//             }
//         }
//         return nullptr;
//     }
// };

// int main() {
 
//     ListNode* head = new ListNode(3);
//     ListNode* n1 = new ListNode(2);
//     ListNode* n2 = new ListNode(0);
//     ListNode* n3 = new ListNode(-4);

//     head->next = n1;
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n1; 

//     Solution s;
//     ListNode* res = s.detectCycle(head);

//     if(res)
//         cout << "Cycle starts at node: " << res->val;
//     else
//         cout << "No cycle";

//     return 0;
// }
