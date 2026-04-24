// HackerRank — Diagonal Difference
// Problem: Difference of diagonals in square matrix.

#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int d1 = 0, d2 = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        d1 += arr[i][i];
        d2 += arr[i][n-i-1];
    }

    return abs(d1 - d2);
}