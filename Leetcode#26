// LeetCode #26 — Remove Duplicates from Sorted Array
// Problem:
// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;

        for(int i = 0; i < nums.size(); i++) {
            bool found = false;

            for(int j = 0; j < temp.size(); j++) {
                if(nums[i] == temp[j]) {
                    found = true;
                    break;
                }
            }

            if(!found)
                temp.push_back(nums[i]);
        }

        nums = temp;
        return nums.size();
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,1,2};

    cout << obj.removeDuplicates(nums);
return 0;
}