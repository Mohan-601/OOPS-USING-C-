// LeetCode #119 — Pascal’s Triangle II
// Problem: Given an integer rowIndex, return the rowIndex-th (0-indexed) row of Pascal’s triangle.
// Example
// Input: rowIndex = 3
// Output: [1,3,3,1]


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);

        for (int i = 1; i < rowIndex; i++) {
            for (int j = i; j > 0; j--) {
                row[j] += row[j - 1];
            }
        }

        return row;
    }
};

int main() {
    Solution obj;
    int rowIndex = 4;

    vector<int> result = obj.getRow(rowIndex);

    for (int val : result)
        cout << val << " ";

    return 0;
}
