// LeetCode #125 — Valid Palindrome
// Problem: Check if string is palindrome ignoring symbols.

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";

        for(char c : s) {
            if(isalnum(c))
                temp += tolower(c);
        }

        int i = 0, j = temp.size() - 1;

        while(i < j) {
            if(temp[i] != temp[j]) return false;
            i++; j--;
        }

        return true;
    }
};