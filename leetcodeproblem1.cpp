// 1.TWO SUM PROBLEM
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i < nums.size(); i++) {
//             for(int j = i + 1; j < nums.size(); j++) {
//                 if(nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {2,7,11,15};
//     vector<int> res = obj.twoSum(nums, 9);

//     cout << res[0] << " " << res[1];
// }



//2. leetcode#9 problem === pallindrome number


// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x < 0) return false;

//         int rev = 0, temp = x;
//         while(temp > 0) {
//             rev = rev * 10 + temp % 10;
//             temp /= 10;
//         }
//         return rev == x;
//     }
// };

// int main() {
//     Solution obj;
//     cout << obj.isPalindrome(121);
// }

// 3. leetcode #26 ===> remove duplicates
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int> temp;

//         for(int i = 0; i < nums.size(); i++) {
//             bool found = false;

//             for(int j = 0; j < temp.size(); j++) {
//                 if(nums[i] == temp[j]) {
//                     found = true;
//                     break;
//                 }
//             }

//             if(!found)
//                 temp.push_back(nums[i]);
//         }

//         nums = temp;
//         return nums.size();
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {1,1,2};

//     cout << obj.removeDuplicates(nums);

// }



// 4.leetcode  #27 — Remove Element
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         vector<int> temp;

//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] != val)
//                 temp.push_back(nums[i]);
//         }

//         nums = temp;
//         return nums.size();
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {3,2,2,3};

//     cout << obj.removeElement(nums, 3);
// }

// 5.LeetCode #121 — Best Time to Buy and Sell Stock

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0;

//         for(int i = 0; i < prices.size(); i++) {
//             for(int j = i+1; j < prices.size(); j++) {
//                 if(prices[j] - prices[i] > maxProfit)
//                     maxProfit = prices[j] - prices[i];
//             }
//         }
//         return maxProfit;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> prices = {7,1,5,3,6,4};
//     cout << obj.maxProfit(prices);
// }

// 6.HackerRank — Simple Array Sum

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int simpleArraySum(vector<int>& arr) {
//         int sum = 0;

//         for(int i = 0; i < arr.size(); i++)
//             sum += arr[i];

//         return sum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {1,2,3,4};

//     cout << obj.simpleArraySum(arr);
// }


// 7.LeetCode #136 — Single Number
// Find the element that appears once (others appear twice).
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++) {
//             int count = 0;

//             for(int j = 0; j < nums.size(); j++) {
//                 if(nums[i] == nums[j])
//                     count++;
//             }

//             if(count == 1)
//                 return nums[i];
//         }
//         return -1;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {2,2,1};
//     cout << obj.singleNumber(nums);
// }

// 8.LeetCode #53 — Maximum Subarray

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxSum = nums[0];
//         for(int i = 0; i < nums.size(); i++) {
//             int sum = 0;
//             for(int j = i; j < nums.size(); j++) {
//                 sum += nums[j];
//                 if(sum > maxSum)
//                     maxSum = sum; }}
//         return maxSum; }};

// int main() {
//     Solution obj;
//     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
//     cout << obj.maxSubArray(nums);
// }

// 9.hacker rank -- MINI-MAX SUM
// Find min sum of 4 elements and max sum of 4 elements.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void miniMaxSum(vector<int>& arr) {
//         long total = 0;

//         for(int i = 0; i < arr.size(); i++)
//             total += arr[i];

//         long minSum = total - arr[0];
//         long maxSum = total - arr[0];

//         for(int i = 0; i < arr.size(); i++) {
//             long sum = total - arr[i];

//             if(sum < minSum) minSum = sum;
//             if(sum > maxSum) maxSum = sum;
//         }

//         cout << minSum << " " << maxSum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {1,2,3,4,5};
//     obj.miniMaxSum(arr);
// }



// 10. LeetCode #88 — Merge Sorted Array
// Merge two sorted arrays.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i = 0; i < n; i++) {
//             nums1[m+i] = nums2[i];
//         }

//         // simple sort
//         for(int i = 0; i < m+n; i++) {
//             for(int j = i+1; j < m+n; j++) {
//                 if(nums1[i] > nums1[j]) {
//                     int temp = nums1[i];
//                     nums1[i] = nums1[j];
//                     nums1[j] = temp;
//                 }
//             }
//         }
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums1 = {1,2,3,0,0,0};
//     vector<int> nums2 = {2,5,6};

//     obj.merge(nums1, 3, nums2, 3);

//     for(int i = 0; i < nums1.size(); i++)
//         cout << nums1[i] << " ";
// }
