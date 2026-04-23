// LeetCode #88 — Merge Sorted Array
// Problem:
// You are given two sorted integer arrays nums1 and nums2, and two integers m and n.
// nums1 has size m + n
// First m elements are valid
// Last n elements are 0 (placeholders)
// Merge nums2 into nums1 as one sorted array.


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < n; i++) {
            nums1[m+i] = nums2[i];
        }

        // simple sort
        for(int i = 0; i < m+n; i++) {
            for(int j = i+1; j < m+n; j++) {
                if(nums1[i] > nums1[j]) {
                    int temp = nums1[i];
                    nums1[i] = nums1[j];
                    nums1[j] = temp;
                }
            }
        }
    }
};

int main() {
    Solution obj;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    obj.merge(nums1, 3, nums2, 3);

    for(int i = 0; i < nums1.size(); i++)
        cout << nums1[i] << " ";
        return 0;
}

