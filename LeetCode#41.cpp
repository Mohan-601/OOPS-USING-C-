// LeetCode #41 — First Missing Positive
// Problem:
// Given an unsorted integer array nums, return the smallest missing positive integer.
// Constraint: must run in O(n) time and use constant extra space.


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            while(nums[i] > 0 && nums[i] <= n && nums[nums[i]-1] != nums[i]){
                swap(nums[i], nums[nums[i]-1]);
            }
        }

        for(int i=0;i<n;i++){
            if(nums[i] != i+1) return i+1;
        }
        return n+1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3,4,-1,1};
    cout << obj.firstMissingPositive(nums);
}