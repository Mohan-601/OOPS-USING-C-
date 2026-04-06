// wap to print pyramid of star

#include <iostream>
using namespace std;

class Pyramid {
    int n;
public:
    Pyramid(int rows) {
        n = rows;
    }

    void display() {
        for(int i = 1; i <= n; i++) {
            for(int space = 1; space <= n-i; space++)
                cout << " ";

            for(int star = 1; star <= (2*i-1); star++)
                cout << "*";

            cout << endl;
        }
    }
};