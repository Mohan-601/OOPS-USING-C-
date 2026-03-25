

// 72.wap to demonstrate inheritance using class
// #include <iostream>
// using namespace std;

// class Calculator{
// public:
//     void add(int a,int b){
//         cout<<"Sum = "<<a+b<<endl;
//     }

//     void sub(int a,int b){
//         cout<<"Difference = "<<a-b<<endl;
//     }

//     void mul(int a,int b){
//         cout<<"Product = "<<a*b<<endl;
//     }

//     void div(int a,int b){
//         cout<<"Division = "<<a/b<<endl;
//     }
// };

// int main(){
//     Calculator c;

//     c.add(10,5);
//     c.sub(10,5);
//     c.mul(10,5);
//     c.div(10,5);
// return 0;
// }


// 73🔹 LeetCode #1 — Two Sum
// Problem:
// Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i < nums.size(); i++) {
//             for(int j = i + 1; j < nums.size(); j++) {
//                 if(nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {2,7,11,15};
//     vector<int> res = obj.twoSum(nums, 9);

//     cout << res[0] << " " << res[1];
// }



// 74🔹 LeetCode #9 — Palindrome Number
// Problem:
// Given an integer x, return true if x is a palindrome, and false otherwise.


// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x < 0) return false;

//         int rev = 0, temp = x;
//         while(temp > 0) {
//             rev = rev * 10 + temp % 10;
//             temp /= 10;
//         }
//         return rev == x;
//     }
// };

// int main() {
//     Solution obj;
//     cout << obj.isPalindrome(121);
// }

// 75🔹 LeetCode #26 — Remove Duplicates from Sorted Array
// Problem:
// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int> temp;

//         for(int i = 0; i < nums.size(); i++) {
//             bool found = false;

//             for(int j = 0; j < temp.size(); j++) {
//                 if(nums[i] == temp[j]) {
//                     found = true;
//                     break;
//                 }
//             }

//             if(!found)
//                 temp.push_back(nums[i]);
//         }

//         nums = temp;
//         return nums.size();
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {1,1,2};

//     cout << obj.removeDuplicates(nums);

// }



// 76🔹 LeetCode #27 — Remove Element
// Problem:
// Given an integer array nums and an integer val, remove all occurrences of val in-place.
// Return the number of elements k that are not equal to val.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         vector<int> temp;

//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] != val)
//                 temp.push_back(nums[i]);
//         }

//         nums = temp;
//         return nums.size();
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {3,2,2,3};

//     cout << obj.removeElement(nums, 3);
// }

// 77🔹 LeetCode #121 — Best Time to Buy and Sell Stock
// Problem:
// You are given an array prices where prices[i] is the price of a stock on day i.
// You want to maximize your profit by:
// Choosing a day to buy
// Choosing a later day to sell
// Return the maximum profit you can achieve.
// If no profit is possible, return 0.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0;

//         for(int i = 0; i < prices.size(); i++) {
//             for(int j = i+1; j < prices.size(); j++) {
//                 if(prices[j] - prices[i] > maxProfit)
//                     maxProfit = prices[j] - prices[i];
//             }
//         }
//         return maxProfit;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> prices = {7,1,5,3,6,4};
//     cout << obj.maxProfit(prices);
// }

// 78.🔹HackerRank — Simple Array Sum

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int simpleArraySum(vector<int>& arr) {
//         int sum = 0;

//         for(int i = 0; i < arr.size(); i++)
//             sum += arr[i];

//         return sum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {1,2,3,4};

//     cout << obj.simpleArraySum(arr);
// }


// 79🔹 LeetCode #136 — Single Number
// Problem:
// Given a non-empty array of integers nums, every element appears twice except for one.
// Find that single one.
// Find the element that appears once (others appear twice).
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++) {
//             int count = 0;

//             for(int j = 0; j < nums.size(); j++) {
//                 if(nums[i] == nums[j])
//                     count++;
//             }

//             if(count == 1)
//                 return nums[i];
//         }
//         return -1;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {2,2,1};
//     cout << obj.singleNumber(nums);
// }

// 80.🔹 LeetCode #53 — Maximum Subarray
// Problem:
// Given an integer array nums, find the contiguous subarray with the largest sum, and return its sum.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxSum = nums[0];

//         for(int i = 0; i < nums.size(); i++) {
//             int sum = 0;
//             for(int j = i; j < nums.size(); j++) {
//                 sum += nums[j];
//                 if(sum > maxSum)
//                     maxSum = sum;
//             }
//         }
//         return maxSum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
//     cout << obj.maxSubArray(nums);
// }

// 81.🔹hacker rank -- MINI-MAX SUM
// Find min sum of 4 elements and max sum of 4 elements.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void miniMaxSum(vector<int>& arr) {
//         long total = 0;

//         for(int i = 0; i < arr.size(); i++)
//             total += arr[i];

//         long minSum = total - arr[0];
//         long maxSum = total - arr[0];

//         for(int i = 0; i < arr.size(); i++) {
//             long sum = total - arr[i];

//             if(sum < minSum) minSum = sum;
//             if(sum > maxSum) maxSum = sum;
//         }

//         cout << minSum << " " << maxSum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {1,2,3,4,5};
//     obj.miniMaxSum(arr);
// }



// 82🔹 LeetCode #88 — Merge Sorted Array
// Problem:
// You are given two sorted integer arrays nums1 and nums2, and two integers m and n.
// nums1 has size m + n
// First m elements are valid
// Last n elements are 0 (placeholders)
// Merge nums2 into nums1 as one sorted array.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i = 0; i < n; i++) {
//             nums1[m+i] = nums2[i];
//         }

//         // simple sort
//         for(int i = 0; i < m+n; i++) {
//             for(int j = i+1; j < m+n; j++) {
//                 if(nums1[i] > nums1[j]) {
//                     int temp = nums1[i];
//                     nums1[i] = nums1[j];
//                     nums1[j] = temp;
//                 }
//             }
//         }
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums1 = {1,2,3,0,0,0};
//     vector<int> nums2 = {2,5,6};

//     obj.merge(nums1, 3, nums2, 3);

//     for(int i = 0; i < nums1.size(); i++)
//         cout << nums1[i] << " ";
// }



// 🔹 83. Reverse Linked List//Leet Code #206
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* reverseList(node* head) {
//         node* prev = NULL;
//         node* curr = head;

//         while (curr) {
//             node* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
// };

// void printList(node* head) {
//     while (head) {
//         cout << head->val << " -> ";
//         head = head->next;
//     }
//     cout << "NULL\n";
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     Solution obj;
//     head = obj.reverseList(head);

//     printList(head);
//     return 0;
// }

// 🔹 84. Middle of Linked List // leet code #876

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* middlenode(node* head) {
//         node* slow = head;
//         node* fast = head;

//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);
//     head->next->next->next = new node(4);

//     Solution obj;
//     node* mid = obj.middlenode(head);

//     cout << "Middle: " << mid->val;
//     return 0;
// }


// 🔹 85. Remove Duplicates from Sorted List leet code #83


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* deleteDuplicates(node* head) {
//         node* curr = head;

//         while (curr && curr->next) {
//             if (curr->val == curr->next->val)
//                 curr->next = curr->next->next;
//             else
//                 curr = curr->next;
//         }
//         return head;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(1);
//     head->next->next = new node(2);

//     Solution obj;
//     head = obj.deleteDuplicates(head);

//     print(head);
//     return 0;
// }


// 🔹 86. Merge Two Sorted Lists leetcode #21


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* mergeTwoLists(node* l1, node* l2) {
//         node dummy(0);
//         node* tail = &dummy;

//         while (l1 && l2) {
//             if (l1->val < l2->val) {
//                 tail->next = l1;
//                 l1 = l1->next;
//             } else {
//                 tail->next = l2;
//                 l2 = l2->next;
//             }
//             tail = tail->next;
//         }

//         if (l1) tail->next = l1;
//         if (l2) tail->next = l2;

//         return dummy.next;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* l1 = new node(1);
//     l1->next = new node(3);

//     node* l2 = new node(2);
//     l2->next = new node(4);

//     Solution obj;
//     node* result = obj.mergeTwoLists(l1, l2);

//     print(result);
//     return 0;
// }


// 🔹 87. Linked List Cycle leetcode #141

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     bool hasCycle(node* head) {
//         node* slow = head;
//         node* fast = head;

//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) return true;
//         }
//         return false;
//     }
// };

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = head; // create cycle

//     Solution obj;
//   if (obj.hasCycle(head)) {
//         cout << "Cycle Found";
//     } else {
//         cout << "No Cycle";
//     }
//     return 0;
// }

// 🔹 88. HACKER-RANK:Compare Two Linked Lists
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

// 89.🔹 1. Delete node in a Linked List leetcode -#237


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     void deletenode(node* node) {
//         node->val = node->next->val;
//         node->next = node->next->next;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(4);
//     head->next = new node(5);
//     head->next->next = new node(1);
//     head->next->next->next = new node(9);

//     Solution obj;
//     obj.deletenode(head->next); 

//     print(head);
//     return 0;
// }


// 🔹 90. Palindrome Linked List leetcode #234


// #include <iostream>
// #include <vector>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     bool isPalindrome(node* head) {
//         vector<int> arr;

//         while (head) {
//             arr.push_back(head->val);
//             head = head->next;
//         }

//         int i = 0, j = arr.size() - 1;
//         while (i < j) {
//             if (arr[i] != arr[j])
//                 return false;
//             i++;
//             j--;
//         }
//         return true;
//     }
// };

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(2);
//     head->next->next->next = new node(1);

//     Solution obj;
//   if (obj.isPalindrome(head)) {
//         cout << "Given lis is a Palindrome";
//     } else {
//         cout << "Given list is not a Not Palindrome";
//     }
//     return 0;
// }


// 🔹 91. Remove Nth node From End leetcode#19

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* removeNthFromEnd(node* head, int n) {
//         int size = 0;
//         node* temp = head;

//         while (temp) {
//             size++;
//             temp = temp->next;
//         }

//         if (n == size)
//             return head->next;

//         temp = head;
//         for (int i = 0; i < size - n - 1; i++)
//             temp = temp->next;

//         temp->next = temp->next->next;
//         return head;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     Solution obj;
//     head = obj.removeNthFromEnd(head, 2);

//     print(head);
//     return 0;
// }

// 🔹 92. Hacker Rank-Find Merge Point of Two Lists
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


// 🔷 93. Butterfly Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) cout << "*";
//         for (int j = 1; j <= 2*(n-i); j++) cout << " ";
//         for (int j = 1; j <= i; j++) cout << "*";
//         cout << endl;
//     }


//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) cout << "*";
//         for (int j = 1; j <= 2*(n-i); j++) cout << " ";
//         for (int j = 1; j <= i; j++) cout << "*";
//         cout << endl;
//         return 0;
//     }
// }

//🔷 94. Hollow Pyramid
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";

//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1 || i == n)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// 🔷 95. Pascal’s Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int num = 1;
//         for (int j = 0; j <= i; j++) {
//             cout << num << " ";
//             num = num * (i - j) / (j + 1);
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 🔷 96. Diamond with Numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++)
//          {cout << " ";}
//         for (int j = 1; j <= i; j++)
//         { cout << j;}
//         for (int j = i-1; j >= 1; j--) 
//         {cout << j;}
//         cout << endl;
//     }

//     for (int i = n-1; i >= 1; i--) {
//         for (int j = 1; j <= n-i; j++)
//          {cout << " ";}
//         for (int j = 1; j <= i; j++)
//         { cout << j;}
//         for (int j = i-1; j >= 1; j--) 
//         {cout << j;}
//         cout << endl;   
//     }
//     return 0;
// }


// 🔷 97 Hollow Square
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (i == 1 || i == n || j == 1 || j == n)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 🔷 98. Hollow Diamond
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }

//     for (int i = n-1; i >= 1; i--) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 🔷 99. Zig-Zag Pattern
// *   *   *
//  * * * *
//   *   *
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 9;

//     for (int i = 1; i <= 3; i++) {
//         for (int j = 1; j <= n; j++) {
//             if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// return 0;
// }


// 🔷 100. Palindrome Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";

//         for (int j = i; j >= 1; j--) cout << j;
//         for (int j = 2; j <= i; j++) cout << j;

//         cout << endl;
//     }
// retrun 0;
// }

// 🔷 101. X Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (j == i || j == n-i+1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// return 0;
// }



// 🔷 102. Sandglass Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) cout << "*";
//         cout << endl;
//     }

//     for (int i = 2; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) cout << "*";
//         cout << endl;
//     }

//     return 0;
// }
