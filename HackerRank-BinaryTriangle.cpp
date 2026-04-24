// HackerRank - Binary Triangle

#include <iostream>
using namespace std;

class BinaryTriangle {
public:
    void printPattern(int n) {

        for (int i = 1; i <= n; i++) {
            int val = (i % 2 == 1) ? 1 : 0;

            for (int j = 1; j <= i; j++) {
                cout << val;
                val = 1 - val;
            }

            cout << endl;
        }
    }
};

int main() {
    BinaryTriangle obj;
    int n = 5;
    obj.printPattern(n);
    return 0;
}