// HackerRank — Staircase
#include <iostream>
using namespace std;

class Staircase {
public:
    void printStaircase(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++)
                cout << " ";
            for (int j = 1; j <= i; j++)
                cout << "#";
            cout << endl;
        }
    }
};

int main() {
    Staircase obj;
    int n = 5;
    obj.printStaircase(n);
    return 0;
}