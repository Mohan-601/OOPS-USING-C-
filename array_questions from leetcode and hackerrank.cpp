
// 1. LeetCode #1 — Two Sum
// Problem:
// Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

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



// 2. LeetCode #9 — Palindrome Number
// Problem:
// Given an integer x, return true if x is a palindrome, and false otherwise.


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



// 3. LeetCode #26 — Remove Duplicates from Sorted Array
// Problem:
// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.


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



// 4. LeetCode #27 — Remove Element
// Problem:
// Given an integer array nums and an integer val, remove all occurrences of val in-place.
// Return the number of elements k that are not equal to val.

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

// 5. LeetCode #20 — Valid Parentheses

// Problem:
// Given a string s containing just '(', ')', '{', '}', '[' and ']', determine if the input string is valid.


// #include <iostream>
// #include <stack>
// using namespace std;

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for(char c : s) {
//             if(c=='(' || c=='{' || c=='[') st.push(c);
//             else {
//                 if(st.empty()) return false;
//                 char top = st.top(); st.pop();
//                 if((c==')' && top!='(') ||
//                    (c=='}' && top!='{') ||
//                    (c==']' && top!='[')) return false;
//             }
//         }
//         return st.empty();
//     }
// };

// int main() {
//     Solution obj;
//     cout << obj.isValid("()[]{}");
// }


// 6. LeetCode #53 — Maximum Subarray

// Problem:
// Given an integer array nums, find the contiguous subarray with the largest sum and return its sum.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int curr = nums[0], maxSum = nums[0];
//         for(int i=1;i<nums.size();i++){
//             curr = max(nums[i], curr + nums[i]);
//             maxSum = max(maxSum, curr);
//         }
//         return maxSum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
//     cout << obj.maxSubArray(v);
// }


// 7. LeetCode #88 — Merge Sorted Array

// Problem:
// Merge nums2 into nums1 as one sorted array.
// nums1 has size m+n with last n elements empty.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=m-1, j=n-1, k=m+n-1;
//         while(i>=0 && j>=0){
//             if(nums1[i]>nums2[j]) nums1[k--]=nums1[i--];
//             else nums1[k--]=nums2[j--];
//         }
//         while(j>=0) nums1[k--]=nums2[j--];
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums1 = {1,2,3,0,0,0};
//     vector<int> nums2 = {2,5,6};
//     obj.merge(nums1,3,nums2,3);
//     for(int x: nums1) cout<<x<<" ";
// }


// 8. LeetCode #121 — Best Time to Buy and Sell Stock

// Problem:
// Find the maximum profit by buying and selling one stock.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int minPrice = INT_MAX, profit = 0;
//         for(int p : prices){
//             minPrice = min(minPrice, p);
//             profit = max(profit, p - minPrice);
//         }
//         return profit;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> v = {7,1,5,3,6,4};
//     cout << obj.maxProfit(v);
// }

// 9. LeetCode #125 — Valid Palindrome
// Problem:
// Check if a string is a palindrome considering only alphanumeric characters and ignoring case.


// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int i=0, j=s.size()-1;
//         while(i<j){
//             while(i<j && !isalnum(s[i])) i++;
//             while(i<j && !isalnum(s[j])) j--;
//             if(tolower(s[i]) != tolower(s[j])) return false;
//             i++; j--;
//         }
//         return true;
//     }
// };

// int main() {
//     Solution obj;
//     cout << obj.isPalindrome("A man, a plan, a canal: Panama");
// }

// 10. LeetCode #136 — Single Number

// Problem:
// Every element appears twice except one. Find that single one.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int res = 0;
//         for(int n : nums) res ^= n;
//         return res;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> v = {4,1,2,1,2};
//     cout << obj.singleNumber(v);
// }

// 11. LeetCode #169 — Majority Element

// Problem:
// Find the element appearing more than ⌊n/2⌋ times.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count=0, candidate;
//         for(int n: nums){
//             if(count==0) candidate=n;
//             count += (n==candidate)?1:-1;
//         }
//         return candidate;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> v = {2,2,1,1,1,2,2};
//     cout << obj.majorityElement(v);
// }


// 12. LeetCode #217 — Contains Duplicate

// Problem:
// Return true if any value appears at least twice.


// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> s;
//         for(int n : nums){
//             if(s.count(n)) return true;
//             s.insert(n);
//         }
//         return false;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> v = {1,2,3,1};
//     cout << obj.containsDuplicate(v);
// }


// 13. LeetCode #242 — Valid Anagram

// Problem:
// Check if two strings are anagrams.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size()!=t.size()) return false;
//         vector<int> freq(26,0);
//         for(char c: s) freq[c-'a']++;
//         for(char c: t){
//             if(--freq[c-'a'] < 0) return false;
//         }
//         return true;
//     }
// };

// int main() {
//     Solution obj;
//     cout << obj.isAnagram("anagram","nagaram");
// }


// 14. LeetCode #344 — Reverse String

// Problem:
// Reverse an array of characters in-place.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int i=0, j=s.size()-1;
//         while(i<j) swap(s[i++], s[j--]);
//     }
// };

// int main() {
//     Solution obj;
//     vector<char> s = {'h','e','l','l','o'};
//     obj.reverseString(s);
//     for(char c:s) cout<<c;
// }


// 15. LeetCode #283 — Move Zeroes

// Problem:
// Move all zeroes to the end while maintaining order of non-zero elements.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j = 0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=0){
//                 swap(nums[i], nums[j]);
//                 j++;
//             }
//         }
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> v = {0,1,0,3,12};
//     obj.moveZeroes(v);
//     for(int x:v) cout<<x<<" ";
// }

// 16.HackerRank — Simple Array Sum

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


// 17.hacker rank -- MINI-MAX SUM
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



// 18 HackerRank — Compare the Triplets

// Problem: Compare scores of Alice and Bob.

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> compareTriplets(vector<int> a, vector<int> b) {
//     int alice = 0, bob = 0;

//     for(int i = 0; i < 3; i++) {
//         if(a[i] > b[i]) alice++;
//         else if(a[i] < b[i]) bob++;
//     }

//     return {alice, bob};
// }


// 19 HackerRank — Diagonal Difference

// Problem: Difference of diagonals in square matrix.

// #include <iostream>
// #include <vector>
// using namespace std;

// int diagonalDifference(vector<vector<int>> arr) {
//     int d1 = 0, d2 = 0;
//     int n = arr.size();

//     for(int i = 0; i < n; i++) {
//         d1 += arr[i][i];
//         d2 += arr[i][n-i-1];
//     }

//     return abs(d1 - d2);
// }


// 20 HackerRank — Plus Minus

// #include <iostream>
// #include <vector>
// using namespace std;

// class PlusMinus {
// private:
//     vector<int> arr;

// public:
    
//     PlusMinus(vector<int> input) {
//         arr = input;
//     }

    
//     void calculateRatios() {
//         int pos = 0, neg = 0, zero = 0;

//         for (int x : arr) {
//             if (x > 0) pos++;
//             else if (x < 0) neg++;
//             else zero++;
//         }

//         int n = arr.size();

//         cout << (float)pos / n << endl;
//         cout << (float)neg / n << endl;
//         cout << (float)zero / n << endl;
//     }
// };

// int main() {
//     vector<int> v = {-4, 3, -9, 0, 4, 1};

//     PlusMinus obj(v);
//     obj.calculateRatios();

//     return 0;
// }

