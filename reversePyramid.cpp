// wap to print star upside down pyramid

#include <iostream>
using namespace std;

class InvertedPyramid {
    int n;
public:
    InvertedPyramid(int rows) {
        n = rows;
    }

    void display() {
        for(int i = n; i >= 1; i--) {
            for(int space = 1; space <= n-i; space++)
                cout << " ";

            for(int star = 1; star <= (2*i-1); star++)
                cout << "*";

            cout << endl;
        }
    }
};

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    InvertedPyramid obj(rows);
    obj.display();

    return 0;
}
