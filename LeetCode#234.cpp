// Palindrome Linked List leetcode #234


#include <iostream>
#include <vector>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    bool isPalindrome(node* head) {
        vector<int> arr;

        while (head) {
            arr.push_back(head->val);
            head = head->next;
        }

        int i = 0, j = arr.size() - 1;
        while (i < j) {
            if (arr[i] != arr[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(2);
    head->next->next->next = new node(1);

    Solution obj;
  if (obj.isPalindrome(head)) {
        cout << "Given lis is a Palindrome";
    } else {
        cout << "Given list is not a Not Palindrome";
    }
    return 0;
}

