// LeetCode #209 — Minimum Size Subarray Sum

// Problem:
// Given an array of positive integers nums and an integer target, return the minimal length of a
// contiguous subarray whose sum ≥ target. If none, return 0.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0, sum=0, minLen=INT_MAX;
        for(int right=0; right<nums.size(); right++){
            sum += nums[right];
            while(sum >= target){
                minLen = min(minLen, right-left+1);
                sum -= nums[left++];
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2,3,1,2,4,3};
    cout << obj.minSubArrayLen(7, nums);
    return 0;
}
