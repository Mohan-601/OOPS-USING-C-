// HackerRank — Concentric Star Pattern

#include <iostream>
using namespace std;

class ConcentricStar {
public:
    void print(int n) {
        int size = 2*n - 1;

        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                int layer = min(min(i, j), min(size-1-i, size-1-j));
                if(layer % 2 == 0) cout << "*";
                else cout << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    ConcentricStar obj;
    obj.print(5);
}