//  LeetCode #560 — Subarray Sum Equals K
// Problem:
// Given an integer array nums and integer k, return total number of continuous subarrays whose sum equals k.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int sum = 0, count = 0;

        for(int n : nums){
            sum += n;
            if(mp.count(sum - k))
                count += mp[sum - k];
            mp[sum]++;
        }
        return count;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,1,1};
    cout << obj.subarraySum(nums,2);
}

