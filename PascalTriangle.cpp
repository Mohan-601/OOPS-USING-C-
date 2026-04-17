//WAP to print pascals triangle

#include <iostream>
using namespace std;

class PascalTriangle {
public:
    void generate(int n) {
        for (int i = 1; i < n; i++) {
           
            for (int space = 1; space < n - i ; space++) {
                cout << " ";
            }
            int number = 1;
            for (int j = 1; j <= i; j++) {
                cout << number << " ";
                number = number * (i - j) / (j );
            }
            cout << endl;
        }
    }
};
int main() {
    PascalTriangle obj;
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    obj.generate(rows);

    return 0;
}