//  LeetCode #128 — Longest Consecutive Sequence
// Problem:
// Given an unsorted array, return the length of the longest consecutive elements sequence.
// Must run in O(n) time.


#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for(int num : s){
            if(!s.count(num-1)){ // start of sequence
                int curr = num;
                int streak = 1;

                while(s.count(curr+1)){
                    curr++;
                    streak++;
                }
                longest = max(longest, streak);
            }
        }
        return longest;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {100,4,200,1,3,2};
    cout << obj.longestConsecutive(nums);
}
