// LeetCode #53 — Maximum Subarray
// Problem:
// Given an integer array nums, find the contiguous subarray with the largest sum, and return its sum.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];

        for(int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for(int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if(sum > maxSum)
                    maxSum = sum;
            }
        }
        return maxSum;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << obj.maxSubArray(nums);
return 0;
}