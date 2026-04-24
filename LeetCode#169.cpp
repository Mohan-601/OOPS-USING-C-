// LeetCode #169 — Majority Element
// Problem: Find element appearing more than n/2 times.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;

        for(int x : nums) {
            if(count == 0) candidate = x;
            count += (x == candidate) ? 1 : -1;
        }

        return candidate;
    }
};