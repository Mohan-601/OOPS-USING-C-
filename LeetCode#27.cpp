// LeetCode #27 — Remove Element
// Problem:
// Given an integer array nums and an integer val, remove all occurrences of val in-place.
// Return the number of elements k that are not equal to val.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val)
                temp.push_back(nums[i]);
        }

        nums = temp;
        return nums.size();
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3,2,2,3};

    cout << obj.removeElement(nums, 3);
    return 0;
}