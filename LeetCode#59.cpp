// LeetCode #59 — Spiral Matrix II
//  Problem: Given n, generate an n x n matrix filled with elements from 1 to n² in spiral order.

// Output:
// [
//  [1,2,3],
//  [8,9,4],
//  [7,6,5]
// ]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));

        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;
        int num = 1;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++)
                matrix[top][i] = num++;
            top++;

            for (int i = top; i <= bottom; i++)
                matrix[i][right] = num++;
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    matrix[bottom][i] = num++;
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    matrix[i][left] = num++;
                left++;
            }
        }

        return matrix;
    }
};

int main() {
    Solution obj;
    int n = 3;

    vector<vector<int>> result = obj.generateMatrix(n);

    for (auto row : result) {
        for (auto val : row)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
