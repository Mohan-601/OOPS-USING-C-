//  LeetCode #136 — Single Number
// Problem:
// Given a non-empty array of integers nums, every element appears twice except for one.
// Find that single one.
// Find the element that appears once (others appear twice).
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int count = 0;

            for(int j = 0; j < nums.size(); j++) {
                if(nums[i] == nums[j])
                    count++;
            }

            if(count == 1)
                return nums[i];
        }
        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2,2,1};
    cout << obj.singleNumber(nums);
return 0;
}