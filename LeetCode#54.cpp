//  LeetCode #54 — Spiral Matrix
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



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {

            for (int i = left; i <= right; i++)
                result.push_back(matrix[top][i]);
            top++;

            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    result.push_back(matrix[bottom][i]);
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    vector<int> result = obj.spiralOrder(matrix);

    for (int x : result)
        cout << x << " ";

    return 0;
}



