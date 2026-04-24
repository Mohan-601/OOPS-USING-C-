// HackerRank — Printing Pattern 
// Problem Description

// Print a square pattern of size 2n-1 where numbers decrease towards center.

// Example (n = 3):

// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3
#include <iostream>
using namespace std;

class Pattern {
public:
    void printPattern(int n) {
        int size = 2*n - 1;
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                int val = n - min(min(i, j), min(size-1-i, size-1-j));
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern obj;
    obj.printPattern(3);
}
