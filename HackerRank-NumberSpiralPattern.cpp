//  HackerRank — Number Spiral Pattern
#include <iostream>
using namespace std;

class NumberSpiral {
public:
    void print(int n) {
        int size = 2*n - 1;

        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                int val = n - min(min(i,j), min(size-1-i, size-1-j));
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    NumberSpiral obj;
    obj.print(4);
}