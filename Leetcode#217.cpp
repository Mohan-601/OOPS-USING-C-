// LeetCode #217 — Contains Duplicate

// Problem: Check if any value appears at least twice.

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;

        for(int x : nums) {
            if(s.count(x)) return true;
            s.insert(x);
        }
        return false;
    }
};
