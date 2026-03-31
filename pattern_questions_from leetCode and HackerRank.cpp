// 1. LeetCode #118 — Pascal’s Triangle{matrix..}


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> triangle;

//         for (int i = 0; i < numRows; i++) {
//             vector<int> row(i + 1, 1);

//             for (int j = 1; j < i; j++) {
//                 row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//             }

//             triangle.push_back(row);
//         }

//         return triangle;
//     }
// };

// int main() {
//     Solution obj;
//     int numRows = 5;

//     vector<vector<int>> result = obj.generate(numRows);

//     for (auto row : result) {
//         for (auto val : row)
//             cout << val << " ";
//         cout << endl;
//     }

//     return 0;
// }

//  2. HackerRank — Staircase

// #include <iostream>
// using namespace std;

// class Staircase {
// public:
//     void printStaircase(int n) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n - i; j++)
//                 cout << " ";
//             for (int j = 1; j <= i; j++)
//                 cout << "#";
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Staircase obj;
//     int n = 5;
//     obj.printStaircase(n);
//     return 0;
// }
// 3. LeetCode #119 — Pascal’s Triangle II
// Problem: Given an integer rowIndex, return the rowIndex-th (0-indexed) row of Pascal’s triangle.
// Example
// Input: rowIndex = 3
// Output: [1,3,3,1]


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
//         vector<int> row(rowIndex + 1, 1);

//         for (int i = 1; i < rowIndex; i++) {
//             for (int j = i; j > 0; j--) {
//                 row[j] += row[j - 1];
//             }
//         }

//         return row;
//     }
// };

// int main() {
//     Solution obj;
//     int rowIndex = 4;

//     vector<int> result = obj.getRow(rowIndex);

//     for (int val : result)
//         cout << val << " ";

//     return 0;
// }


// 4. HackerRank — Plus Minus
// Problem:Given an array of integers, calculate the ratios of:
// positive numbers
// negative numbers
// zeros

// Print each value on a new line with 6 decimal places.

// Example
// Input: [-4, 3, -9, 0, 4, 1]

// Output:
// 0.500000
// 0.333333
// 0.166667

// #include <iostream>
// #include <vector>
// #include <iomanip>
// using namespace std;

// class Solution {
// public:
//     void plusMinus(vector<int>& arr) {
//         int pos = 0, neg = 0, zero = 0;
//         int n = arr.size();

//         for (int x : arr) {
//             if (x > 0) pos++;
//             else if (x < 0) neg++;
//             else zero++;
//         }

//         cout << fixed << setprecision(6);
//         cout << (double)pos / n << endl;
//         cout << (double)neg / n << endl;
//         cout << (double)zero / n << endl;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {-4, 3, -9, 0, 4, 1};

//     obj.plusMinus(arr);

//     return 0;
// }


//  5. LeetCode #59 — Spiral Matrix II
//  Problem: Given n, generate an n x n matrix filled with elements from 1 to n² in spiral order.

// Output:
// [
//  [1,2,3],
//  [8,9,4],
//  [7,6,5]
// ]

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         vector<vector<int>> matrix(n, vector<int>(n, 0));

//         int top = 0, bottom = n - 1;
//         int left = 0, right = n - 1;
//         int num = 1;

//         while (top <= bottom && left <= right) {
//             for (int i = left; i <= right; i++)
//                 matrix[top][i] = num++;
//             top++;

//             for (int i = top; i <= bottom; i++)
//                 matrix[i][right] = num++;
//             right--;

//             if (top <= bottom) {
//                 for (int i = right; i >= left; i--)
//                     matrix[bottom][i] = num++;
//                 bottom--;
//             }

//             if (left <= right) {
//                 for (int i = bottom; i >= top; i--)
//                     matrix[i][left] = num++;
//                 left++;
//             }
//         }

//         return matrix;
//     }
// };

// int main() {
//     Solution obj;
//     int n = 3;

//     vector<vector<int>> result = obj.generateMatrix(n);

//     for (auto row : result) {
//         for (auto val : row)
//             cout << val << " ";
//         cout << endl;
//     }

//     return 0;
// }


//  6. HackerRank — Hollow Square Pattern 

// #include <iostream>
// using namespace std;

// class HollowSquare {
// public:
//     void printPattern(int n) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n; j++) {
//                 if (i == 1 || i == n || j == 1 || j == n)
//                     cout << "*";
//                 else
//                     cout << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     HollowSquare obj;
//     int n = 5;
//     obj.printPattern(n);
//     return 0;
// }


//  7. LeetCode #54 — Spiral Matrix
// Problem: Given an m x n matrix, return all elements in spiral order.

// Example
// Input:
// [
//  [1,2,3],
//  [4,5,6],
//  [7,8,9]
// ]
// Output:
// [1,2,3,6,9,8,7,4,5]



// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> result;

//         int top = 0, bottom = matrix.size() - 1;
//         int left = 0, right = matrix[0].size() - 1;

//         while (top <= bottom && left <= right) {

//             for (int i = left; i <= right; i++)
//                 result.push_back(matrix[top][i]);
//             top++;

//             for (int i = top; i <= bottom; i++)
//                 result.push_back(matrix[i][right]);
//             right--;

//             if (top <= bottom) {
//                 for (int i = right; i >= left; i--)
//                     result.push_back(matrix[bottom][i]);
//                 bottom--;
//             }

//             if (left <= right) {
//                 for (int i = bottom; i >= top; i--)
//                     result.push_back(matrix[i][left]);
//                 left++;
//             }
//         }

//         return result;
//     }
// };

// int main() {
//     Solution obj;

//     vector<vector<int>> matrix = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     vector<int> result = obj.spiralOrder(matrix);

//     for (int x : result)
//         cout << x << " ";

//     return 0;
// }


// 8. HackerRank — Diamond Pattern

// #include <iostream>
// using namespace std;

// class Diamond {
// public:
//     void printPattern(int n) {

    
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n - i; j++)
//                 cout << " ";
//             for (int j = 1; j <= 2 * i - 1; j++)
//                 cout << "*";
//             cout << endl;
//         }

//         for (int i = n - 1; i >= 1; i--) {
//             for (int j = 1; j <= n - i; j++)
//                 cout << " ";
//             for (int j = 1; j <= 2 * i - 1; j++)
//                 cout << "*";
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Diamond obj;
//     int n = 3;
//     obj.printPattern(n);
//     return 0;
// }


// 9.HackerRank -- Hollow Pyramid
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";

//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1 || i == n)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// 10.HackerRank-- Hollow Diamond
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }

//     for (int i = n-1; i >= 1; i--) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 11. HackerRank --Palindrome Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";

//         for (int j = i; j >= 1; j--) cout << j;
//         for (int j = 2; j <= i; j++) cout << j;

//         cout << endl;
//     }
// retrun 0;
// }

// 12. HackerRank-- Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (j == i || j == n-i+1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// return 0;
// }


// 13. HackerRank - Hourglass Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) cout << "*";
//         cout << endl;
//     }

//     for (int i = 2; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) cout << "*";
//         cout << endl;
//     }
//     return 0;
// }

// 14. Zig-Zag Pattern
// *   *   *
//  * * * *
//   *   *
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 9;

//     for (int i = 1; i <= 3; i++) {
//         for (int j = 1; j <= n; j++) {
//             if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// return 0;
// }


// 15. HackerRank — Triangle Quest
// For n = 5:
// 1
// 22
// 333
// 4444

// #include <iostream>
// using namespace std;

// class TriangleQuest {
// public:
//     void printPattern(int n) {
//         for(int i = 1; i < n; i++) {
//             for(int j = 0; j < i; j++)
//                 cout << i;
//             cout << endl;
//         }
//     }
// };

// int main() {
//     TriangleQuest obj;
//     obj.printPattern(6);
// }


// 16. hackerRank Pallindrom pyramid
// #include <iostream>
// using namespace std;

// class PalindromePyramid {
// public:
//     void printPattern(int n) {
//         for (int i = 1; i <= n; i++) {

//             for (int j = 1; j <= n - i; j++)
//                 cout << " ";

//             for (int j = 1; j <= i; j++)
//                 cout << j;

//             for (int j = i - 1; j >= 1; j--)
//                 cout << j;

//             cout << endl;
//         }
//     }
// };

// int main() {
//     PalindromePyramid obj;
//     int n = 5;
//     obj.printPattern(n);
//     return 0;
// }




// 17.HackerRank - Binary Triangle

// #include <iostream>
// using namespace std;

// class BinaryTriangle {
// public:
//     void printPattern(int n) {

//         for (int i = 1; i <= n; i++) {
//             int val = (i % 2 == 1) ? 1 : 0;

//             for (int j = 1; j <= i; j++) {
//                 cout << val;
//                 val = 1 - val;
//             }

//             cout << endl;
//         }
//     }
// };

// int main() {
//     BinaryTriangle obj;
//     int n = 5;
//     obj.printPattern(n);
//     return 0;
// }


// 18. HackerRank – Checkerboard Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             if((i + j) % 2 == 0) cout << "*";
//             else cout << "#";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 19. HackerRank — Printing Pattern 
// Problem Description

// Print a square pattern of size 2n-1 where numbers decrease towards center.

// Example (n = 3):

// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3
// OOP C++ Solution
// #include <iostream>
// using namespace std;

// class Pattern {
// public:
//     void printPattern(int n) {
//         int size = 2*n - 1;
//         for(int i = 0; i < size; i++) {
//             for(int j = 0; j < size; j++) {
//                 int val = n - min(min(i, j), min(size-1-i, size-1-j));
//                 cout << val << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Pattern obj;
//     obj.printPattern(3);
// }

// 20. HackerRank — Rangoli Pattern
// Problem Description

// Print alphabet rangoli of size n.

// Example (n = 3):

// ----c----
// --c-b-c--
// c-b-a-b-c
// --c-b-c--
// ----c----

// #include <iostream>
// using namespace std;

// class Rangoli {
// public:
//       Rangoli(int n) {
//         int width = 4*n - 3;

//         for(int i = 0; i < n; i++) {
//             string s = "";
//             for(int j = n-1; j >= n-i; j--) {
//                 s += char('a' + j);
//                 s += "-";
//             }
//             s += char('a' + (n-i-1));
//             for(int j = n-i; j < n; j++) {
//                 s += "-";
//                 s += char('a' + j);
//             }

//             int dash = (width - s.size()) / 2;
//             cout << string(dash, '-') << s << string(dash, '-') << endl;
//         }

//         for(int i = n-2; i >= 0; i--) {
//             string s = "";
//             for(int j = n-1; j >= n-i; j--) {
//                 s += char('a' + j);
//                 s += "-";
//             }
//             s += char('a' + (n-i-1));
//             for(int j = n-i; j < n; j++) {
//                 s += "-";
//                 s += char('a' + j);
//             }

//             int dash = (width - s.size()) / 2;
//             cout << string(dash, '-') << s << string(dash, '-') << endl;
//         }
//     }
// };

// int main() {
//     Rangoli r(3);
//     return 0;
// }

