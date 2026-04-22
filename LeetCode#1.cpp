
// LeetCode #1 — Two Sum
// Problem:
// Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2,7,11,15};
    vector<int> res = obj.twoSum(nums, 9);

    cout << res[0] << " " << res[1];
return 0;
}
